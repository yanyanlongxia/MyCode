import os
import time

from selenium import webdriver
from selenium.common.exceptions import NoSuchElementException
from selenium.webdriver.common.by import By
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.support.wait import WebDriverWait

from handy.tools import Tools
from handy.useful_functions import password_Generator, random_four_digit_PIN, username_generator, get_driver_ext_path


class OpencccForm:

    def __init__(self, person_info, email, college_name):
        self._person_info = person_info

        path, ublock_ext_path = get_driver_ext_path()
        options = webdriver.ChromeOptions()
        options.add_extension(ublock_ext_path)
        options.headless = False
        options.add_argument('log-level=3')
        self._driver = webdriver.Chrome(executable_path=path, options=options)

        self._baseURL = 'https://www.opencccapply.net/uPortal/'
        self._driver.get(self._baseURL)
        self._college_name = college_name

        self._firstname = self._person_info.get("firstname")
        self._lastname = self._person_info.get("lastname")
        self._ssn_number = self._person_info.get("ssn")
        self._phone_num = self._person_info.get("phone_num")
        self._alter_phone = self._person_info.get("parent_phone")
        self._sex = self._person_info.get("sex")
        self._emailid = email
        self._perform = Tools(self._driver)

        # birth_info
        #############################
        self._birth_month = None
        self._birth_day = None
        self._birth_year = None

        # address_info
        #############################
        self._street_address = None
        self._city = None
        self._state = None
        self._zipcode = None
        #############################

        # account_credentials
        ##################################
        self._username = None
        self._password = None
        self._PIN = None
        self._cccid = None

        self._security_question_1 = 'Where did your parents meet?'
        self._answer_1 = 'in Parallel universe'
        self._security_question_2 = 'What was the make and model of your first car?'
        self._answer_2 = 'Toyota Toy Car'
        self._security_question_3 = 'In what city or town was your first job?'
        self._answer_3 = 'Handjob city'

    # openccc_apply_page_2 ACTIONS
    ################################################################################

    def _set_name_stuff(self):
        self._perform.set_input_by_ID('inputFirstName', self._firstname)
        self._perform.click_button_by_ID('inputHasNoMiddleName')
        self._perform.set_input_by_ID('inputLastName', self._lastname)
        self._perform.click_button_by_ID('hasOtherNameNo')
        self._perform.click_button_by_ID('hasPreferredNameNo')

    def _set_DOB_stuff(self):

        birth_month = "3"
        birth_day = "24"
        # uncommemt next line 75 if you want random birth_year
        # birth_year = str(random.choice(range(1995, 1999)))
        birth_year = "1997"

        self._perform.set_date_box(birth_month, birth_day, None, 'inputBirthDateMonth', 'inputBirthDateDay', None)
        self._perform.set_input_by_ID('inputBirthDateYear', birth_year)
        self._perform.set_date_box(birth_month, birth_day, None, 'inputBirthDateMonthConfirm',
                                   'inputBirthDateDayConfirm', None)
        self._perform.set_input_by_ID('inputBirthDateYearConfirm', birth_year)

        self._birth_month = birth_month
        self._birth_day = birth_day
        self._birth_year = birth_year

    def _set_SSN_stuff(self):

        self._perform.click_button_by_ID('-have-ssn-yes')
        self._perform.set_input_by_ID('-ssn-input1', self._ssn_number)
        self._perform.set_input_by_ID('-ssn-input2', self._ssn_number)

    ################################################################################

    def _click_continue_button(self):
        # self._perform.click_button_by_ID('accountFormSubmit')
        time.sleep(2)
        self._perform.click_button_by_ID('accountFormSubmit')
        # self._perform.click_button_by_XPATH('//*[@id="accountFormSubmit"]')

    # openccc_apply_page_2 ACTIONS
    ################################################################################

    def _set_email_stuff(self):
        self._perform.set_input_by_ID('inputEmail', self._emailid)
        self._perform.set_input_by_ID('inputEmailConfirm', self._emailid)

    def _set_telephone_stuff(self):
        self._perform.set_input_by_ID('inputSmsPhone', self._phone_num)
        self._perform.set_input_by_ID('inputAlternatePhone', self._alter_phone)

    def _set_random_address(self):

        # _person_info = {
        #     "street_adr": '326 5th St',
        #     "city": 'Eureka',
        #     "zip_code": '95501'
        # }
        # _person_info = {'firstname': 'John', 'lastname': 'Walker', 'sex': 'M',
        #                'ssn': None, 'fathername': 'Paul', 'phone_num': None,
        #                'parent_phone': None,
        #                'street_adr': '3232 Denver Avenue',
        #                'city': 'Riverside',
        #                'state': 'CA',
        #                'zipcode': '92503'}

        street_address = self._person_info.get("street_adr")
        city = self._person_info.get("city")
        zipcode = self._person_info.get("zipcode")
        state = "CA"

        # time.sleep(2)
        self._perform.set_input_by_ID('inputStreetAddress1', street_address)
        self._perform.set_input_by_ID('inputCity', city)
        self._perform.set_select_by_ID('inputState', state)
        self._perform.set_input_by_ID('inputPostalCode', zipcode)
        time.sleep(1)
        self._street_address = street_address
        self._city = city
        self._zipcode = zipcode
        self._state = state

    ################################################################################

    # openccc_apply_page_3 ACTIONS
    ################################################################################

    def _set_username_password(self):
        username_error_flag = True
        username = username_generator(8)
        password = password_Generator(14)
        while username_error_flag:
            try:
                username = username_generator(8)
                self._perform.set_input_by_ID('inputUserId', username)
                error = WebDriverWait(self._driver, 40).until(
                    EC.presence_of_element_located((By.ID, 'userIdStatus'))
                )
                username_error_flag = False
            except NoSuchElementException:
                username_error_flag = True

        self._perform.set_input_by_ID('inputPasswd', password)
        self._perform.set_input_by_ID('inputPasswdConfirm', password)

        self._username = username
        self._password = password

    def _set_PIN(self):
        PIN = random_four_digit_PIN()
        self._perform.set_input_by_ID('inputPin', PIN)
        self._perform.set_input_by_ID('inputPinConfirm', PIN)
        self._PIN = PIN

    def _set_security_questions(self):
        self._perform.set_select_by_ID('inputSecurityQuestion1', "1")
        self._perform.set_input_by_ID('inputSecurityAnswer1', self._answer_1)

        self._perform.set_select_by_ID('inputSecurityQuestion2', "2")
        self._perform.set_input_by_ID('inputSecurityAnswer2', self._answer_2)

        self._perform.set_select_by_ID('inputSecurityQuestion3', "16")
        self._perform.set_input_by_ID('inputSecurityAnswer3', self._answer_3)

    def solve_captha(self):
        os.system('cls')
        time.sleep(1)
        print("Psstt...I'm not smart enough to solve CAPTCHA by myself :(")
        time.sleep(2)
        print('need your Intelligence')
        time.sleep(2)
        print('Please solve captcha for me....^^,')
        time.sleep(2)
        is_solved = 'n'
        while is_solved != 'y':
            is_solved = input("Have you solved CAPTCHA (y/n) ? : ").lower()
            if is_solved != 'y':
                print("Okay solve i'm waiting....")
                time.sleep(12)
        time.sleep(1)
        print("Sshheeww....Thank you!....owe you EDU mail :D")

    def _account_created_page(self):
        waiting = True
        while waiting:
            try:
                cccid = WebDriverWait(self._driver, 30).until(
                    EC.presence_of_element_located((By.CSS_SELECTOR, '.ccc-id'))
                ).text
                self._cccid = cccid
                waiting = False
            except NoSuchElementException:
                waiting = True
        self._perform.click_button_by_XPATH('//*[@id="registrationSuccess"]/main/div[2]/div/div/button')

    ################################################################################

    def _openccc_apply_page_1(self):
        self._perform.click_by_LINK_TEXT('Create a New Account')
        self._perform.click_button_by_ID('accountFormSubmit')

        self._set_name_stuff()
        self._set_DOB_stuff()
        self._set_SSN_stuff()
        self._click_continue_button()

    def _openccc_apply_page_2(self):
        self._set_email_stuff()
        self._set_telephone_stuff()
        self._set_random_address()
        self._click_continue_button()

    def _openccc_apply_page_3(self):

        self._set_username_password()
        self._set_PIN()
        self._set_security_questions()
        self.solve_captha()
        self._click_continue_button()
        self._account_created_page()

    def _save_info(self):
        if int(self._birth_month) <= 9:
            birth_month = '0' + self._birth_month
        else:
            birth_month = self._birth_month
        edu_login_password = '88@' + self._lastname[0].upper() + birth_month + self._birth_day
        print("all info are saved!")

        with open("accountinfo.txt", 'a') as txtFile:
            txtFile.writelines("===================================================\n")
            txtFile.writelines("Created On ==> {}\n".format(time.strftime('%I:%M:%S %p, %d %b %Y')))
            txtFile.writelines("College Name ==> {}\n".format(self._college_name))
            txtFile.writelines("Firstname ==> {}\n".format(self._firstname))
            txtFile.writelines("Lastname ==> {}\n".format(self._lastname))
            txtFile.writelines("emailID ==> {}\n".format(self._emailid))
            txtFile.writelines("EDU Mail ==> will be sent to given emailID\n")
            txtFile.writelines("EDU mail password ==> {}\n".format(edu_login_password))
            txtFile.writelines("{}\n".format(self._cccid))
            txtFile.writelines("PIN number ==> {}\n".format(self._PIN))
            txtFile.writelines("OCC Username ==> {}\n".format(self._username))
            txtFile.writelines("OCC Password ==> {}\n".format(self._password))
            txtFile.writelines("Phone_number ==> {}\n".format(self._phone_num))
            txtFile.writelines("SSN-Number ==> {}\n".format(self._ssn_number))
            txtFile.writelines("DOB ==> {}/{}/{}\n".format(self._birth_day, self._birth_month, self._birth_year))
            txtFile.writelines("===================================================\n")
            txtFile.writelines("_______Security Questions_______\n")
            txtFile.writelines("Q.1> {}\n".format(self._security_question_1))
            txtFile.writelines("A.1> {}\n".format(self._answer_1))
            txtFile.writelines("Q.2> {}\n".format(self._security_question_2))
            txtFile.writelines("A.2> {}\n".format(self._answer_2))
            txtFile.writelines("Q.3> {}\n".format(self._security_question_3))
            txtFile.writelines("A.3> {}\n".format(self._answer_3))
            txtFile.writelines("===================================================\n")

    # Main driver
    # ____________________________
    def fill_form(self):
        self._openccc_apply_page_1()
        self._openccc_apply_page_2()
        self._openccc_apply_page_3()
        self._save_info()
        self._driver.close()
        return self._username, self._password
