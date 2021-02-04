import time

from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.support.ui import WebDriverWait

from handy.tools import Tools
from handy.useful_functions import get_driver_ext_path


class Southwest:

    def __init__(self, username, password, info):
        self.parent_phone_num = info.get("parent_phone")
        self.my_phone_num = info.get("phone_num")
        self.lastname = info.get("lastname")
        self.fathername = info.get("fathername")
        self.sex = info.get("sex")

        path, ublock_ext_path = get_driver_ext_path()
        options = webdriver.ChromeOptions()
        options.add_extension(ublock_ext_path)
        options.headless = False
        options.add_argument('log-level=3')
        self._driver = webdriver.Chrome(executable_path=path, options=options)

        self.baseURL = 'https://www.opencccapply.net/uPortal/'
        self._driver.get(self.baseURL)

        self.username = username
        self.password = password
        self.perform = Tools(self._driver)

    # __________main driver_______________
    def start_process(self):
        self.collegeApplication()

    # +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    # ________________ college Application page _______________________
    # MAIN DRIVER
    def collegeApplication(self):
        self.login()
        self.enrollment()
        self.currentMailingAddress_page()
        self.education_page()
        self.citizenship_page()
        self.residency_page()
        self.needs_interests_page()
        self.demographic_page()
        self.supplemental_question_page()
        self.submission_page()
        self.confimation_page()
        self.application_survey_page()
        self.click_submit_and_finish()
        self._driver.close()
        self._driver.quit()

    # FUNCTIONS USED IN COLLEGE-APPLICATION
    # __________________________________________________
    def enrollment(self):
        select_term_applying_ID = 'inputTermId'
        term_applying_VALUE = 'CAP_4416'
        select_education_Goal_ID = 'inputEduGoal'
        education_Goal_VALUE = 'O'
        select_program_ID = 'inputMajorId'
        program_VALUE = 'CAP_8873'
        time.sleep(1)
        self.perform.set_select_by_ID(select_term_applying_ID, term_applying_VALUE)
        self.perform.set_select_by_ID(select_education_Goal_ID, education_Goal_VALUE)
        self.perform.set_select_by_ID(select_program_ID, program_VALUE)

        time.sleep(1)
        self._click_App_continue()

    def currentMailingAddress_page(self):
        self.perform.click_button_by_ID('inputAddressSame')
        self._click_App_continue()

    def education_page(self):
        # LOCATORS and VALUES (this page stays sames for all)

        hs_completion_month_VALUE = '5'
        select_hs_completion_month_ID = 'inputHsCompMM'
        hs_completion_day_VALUE = '14'
        select_hs_completion_day_ID = 'inputHsCompDD'
        hs_completion_year_VALUE = '2015'
        hs_completion_year_ID = 'inputHsCompYYYY'

        select_enrollment_ID = 'inputEnrollmentStatus'
        enrollment_VALUE = '1'

        select_HS_edu_level_ID = 'inputHsEduLevel'
        HS_edu_level_VALUE = '4'

        last_HS_country = 'US'
        last_HS_state = 'CA'
        last_HS_name = 'Gerhard Kohn'
        last_HS_city = 'Long Beach'

        # College Enrollment Status
        self.perform.set_select_by_ID(select_enrollment_ID, enrollment_VALUE)

        # High School Education
        self.perform.set_select_by_ID(select_HS_edu_level_ID, HS_edu_level_VALUE)
        time.sleep(2)
        self.perform.set_date_box(hs_completion_month_VALUE, hs_completion_day_VALUE, None,
                                  select_hs_completion_month_ID, select_hs_completion_day_ID, None)
        self.perform.set_input_by_ID(hs_completion_year_ID, hs_completion_year_VALUE)

        self.perform.click_button_by_ID('inputCaHsGradNo')
        self.perform.click_button_by_ID('inputCaHs3yearNo')
        self.perform.click_button_by_ID('inputHsAttendance1')

        # last-high_school_info
        #
        self.perform.set_select_by_ID('hs-input-sf-country', last_HS_country)
        time.sleep(3)
        self.perform.set_select_by_ID('hs-input-sf-state', last_HS_state)
        time.sleep(2)
        self.perform.set_input_by_ID('hs-school-name', last_HS_name)
        time.sleep(3)
        self.perform.click_button_by_XPATH('//*[@id="hs-suggestions"]/ul/li[3]')
        # try:
        #     self.perform.set_input_by_ID('hs-input-sf-city', last_HS_city)
        # except:
        #     print("not found city!!")

        # High School Transcript Information
        self.perform.set_input_by_ID('inputGPA', '3.77')
        time.sleep(5)
        self.perform.set_select_by_ID('inputHighestEnglishCourse', '1')
        time.sleep(1.5)
        self.perform.set_select_by_ID('inputHighestEnglishGrade', 'B+')
        self.perform.set_select_by_ID('inputHighestMathCourseTaken', '12')
        time.sleep(1.5)
        self.perform.set_select_by_ID('inputHighestMathTakenGrade', 'A-')

        self._click_App_continue()

    def citizenship_page(self):
        # (this page stays same)
        self.perform.set_select_by_ID('inputCitizenshipStatus', '1')
        self.perform.set_select_by_ID('inputMilitaryStatus', 'B')
        self._click_App_continue()

    def residency_page(self):
        # California Residence
        self.perform.click_button_by_ID('inputCaRes2YearsYes')


        # Special Residency Categories
        self.perform.click_button_by_ID('inputHomelessYouthNo')
        self.perform.click_button_by_ID('inputIsEverInFosterCareNo')
        try:
            self._driver.find_element_by_id('inputCaCollegeEmpNo').click()
        except Exception:
            pass
        try:
            self._driver.find_element_by_id('inputCaSchoolEmpNo').click()
        except Exception:
            pass
        try:
            self._driver.find_element_by_id('inputCaSeasonalAgNo').click()
        except Exception:
            pass

        self._click_App_continue()

    def needs_interests_page(self):
        # main language
        self.perform.click_button_by_ID('inputEnglishYes')

        # financial_assitance..stuff
        self.perform.click_button_by_ID('inputFinAidInfoYes')
        self.perform.click_button_by_ID('inputAssistanceYes')

        # atheletic_intereset stuff..
        self.perform.click_button_by_ID('inputAthleticInterest2')

        # program_and service stuff...
        self.perform.click_button_by_ID('inputAcademicCounseling')

        self._click_App_continue()

    def demographic_page(self):
        if self.sex == "M":
            value = "Male"
        else:
            value = "Female"

        self.perform.set_select_by_ID('inputGender', value)
        self.perform.set_select_by_ID('inputTransgender', 'No')
        self.perform.set_select_by_ID('inputOrientation', 'StraightHetrosexual')

        # parent education
        self.perform.set_select_by_ID('inputParentGuardianEdu1', '6')
        self.perform.set_select_by_ID('inputParentGuardianEdu2', '4')

        # race/Ethnicity
        self.perform.click_button_by_ID('inputHispanicNo')

        self.perform.click_button_by_ID('inputRaceEthnicity800')
        time.sleep(2)
        self.perform.click_button_by_ID('inputRaceEthnicity805')

        self._click_App_continue()

    def supplemental_question_page(self):
        full_name_father = self.fathername + ' ' + self.lastname
        # 1.Assement_information
        self.perform.click_button_by_ID('YESNO_1_no')
        self.perform.click_button_by_ID('YESNO_2_no')
        # 2. Gender
        self.perform.set_select_by_ID('_supp_MENU_1', self.sex)

        # 3.primary_language //english
        self.perform.set_select_by_ID('_supp_MENU_2', 'EN')

        # 4.Student Military Status
        self.perform.set_select_by_ID('_supp_MENU_21', '4')

        # 5.Student Military Dependent
        self.perform.set_select_by_ID('_supp_MENU_22', '4')

        # 6.type of student
        self.perform.click_button_by_ID('_supp_CHECK_4')

        # 7.Campus Emergengy
        self.perform.set_input_by_ID('_supp_TEXT_1', self.my_phone_num)

        self.perform.set_input_by_ID('_supp_TEXT_2', full_name_father)
        self.perform.set_input_by_ID('_supp_TEXT_3', self.parent_phone_num)

        self.perform.set_select_by_ID('_supp_MENU_3', 'Parent')

        # 8.Participating in sport?
        self.perform.click_button_by_ID('YESNO_3_yes')
        # if yes
        self.perform.set_select_by_ID('_supp_MENU_7', 'BASKIC')

        # 9.
        self.perform.click_button_by_ID('YESNO_4_no')
        self.perform.click_button_by_ID('YESNO_5_no')
        self.perform.set_select_by_ID('_supp_MENU_20', 'EN')

        # 10.
        self.perform.click_button_by_ID('YESNO_6_no')
        self.perform.click_button_by_ID('YESNO_7_no')
        self.perform.click_button_by_ID('YESNO_8_no')

        self._click_App_continue()

    def submission_page(self):
        self.perform.click_button_by_ID('inputConsentYes')
        self.perform.click_button_by_ID('inputESignature')
        self.perform.click_button_by_ID('inputFinancialAidAck')
        self.perform.click_button_by_ID('submit-application-button')

    def confimation_page(self):
        WebDriverWait(self._driver, 30).until(
            EC.element_to_be_clickable((By.NAME, '_eventId_finish'))
        ).click()

    def application_survey_page(self):
        self.perform.click_button_by_ID('inputEnglishVerySatisfied')
        self.perform.click_button_by_ID('RecommendYes')

        text_area = WebDriverWait(self._driver, 30).until(
            EC.presence_of_element_located((By.ID, 'inputComments'))
        )
        text_area.send_keys("Thank you very much for making our life Easier!!")

        WebDriverWait(self._driver, 30).until(
            EC.element_to_be_clickable((By.NAME, '_eventId_submit'))
        ).click()

    def click_submit_and_finish(self):
        time.sleep(2)
        self.perform.click_button_by_XPATH("//button[contains(.,'Sign Out & Finish')]")

    def _click_App_continue(self):
        time.sleep(1)
        WebDriverWait(self._driver, 30).until(
            EC.element_to_be_clickable((By.NAME, '_eventId_continue'))
        ).click()
        time.sleep(1)

    def login(self):
        sign_in_btn_ID = 'portal-sign-in-link'
        username_input_ID = 'inputJUsername'
        password_input_ID = 'inputJPassword'
        sign_in_btn_NAME = '_eventId_proceed'
        select_college_ID = 'inputCollegeId'
        college_value = '745'
        start_application_btn_ID = 'beginApplicationButton'



        self.perform.set_input_by_ID(username_input_ID, self.username)
        self.perform.set_input_by_ID(password_input_ID, self.password)
        #self.perform.click_button_by_ID(sign_in_btn_ID)
        WebDriverWait(self._driver, 30).until(
            EC.element_to_be_clickable((By.NAME, sign_in_btn_NAME))
        ).click()

        self.perform.set_select_by_ID(select_college_ID, college_value)
        self.perform.click_button_by_ID(start_application_btn_ID)
