import random
import time

from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.support.ui import WebDriverWait

from handy.tools import Tools
from handy.useful_functions import new_tab, switch_tab, get_driver_ext_path, clear


class AccountDetail:

    def __init__(self, get_state="California", college_name="Orange Costa College"):
        # self._driver = webdriver.Firefox(executable_path=self.path)
        # self._driver.install_addon(self.ublck_ext_path, temporary=True)

        path, ublock_ext_path = get_driver_ext_path()
        options = webdriver.ChromeOptions()
        options.add_extension(ublock_ext_path)
        options.headless = False
        options.add_argument('log-level=3')
        self._driver = webdriver.Chrome(executable_path=path, options=options)

        # self._driver.maximize_window()
        self._college_name = college_name
        self._get_state = get_state
        self._firstname = None
        self._fatherName = None
        self._lastname = None
        self._sex = None
        self._ssn = None
        self._phone_num = None
        self._parent_phone_num = None
        self._street_address = None
        self._city = None
        self._state = None
        self._zip_code = None

    def _get_state_value(self):
        state_value = {
            "Alaska": "AK",
            "Alabama": "AL",
            "Arkansas": "AR",
            "Arizona": "AZ",
            "California": "CA",
            "Colorado": "CO",
            "Connecticut": "CT",
            "District of Columbia": "DC",
            "Delaware": "DE",
            "Florida": "FL",
            "Georgia": "GA",
            "Hawaii": "HI",
            "Iowa": "IA",
            "Idaho": "ID",
            "Illinois": "IL",
            "Indiana": "IN",
            "Kansas": "KS",
            "Kentucky": "KY",
            "Louisiana": "LA",
            "Massachusetts": "MA",
            "Maryland": "MD",
            "Maine": "ME",
            "Michigan": "MI",
            "Minnesota": "MN",
            "Missouri": "MO",
            "Mississippi": "MS",
            "Montana": "MT",
            "North Carolina": "NC",
            "North Dakota": "ND",
            "Nebraska": "NE",
            "New Hampshire": "NH",
            "New Jersey": "NJ",
            "New Mexico": "NM",
            "Nevada": "NV",
            "New York": "NY",
            "Ohio": "OH",
            "Oklahoma": "OK",
            "Oregon": "OR",
            "Pennsylvania": "PA",
            "Rhode Island": "RI",
            "South Carolina": "SC",
            "South Dakota": "SD",
            "Tennessee": "TN",
            "Texas": "TX",
            "Utah": "UT",
            "Virginia": "VA",
            "Vermont": "VT",
            "Washington": "WA",
            "Wisconsin": "WI",
            "West Virginia": "WV",
            "Wyoming": "WY"
        }
        return state_value.get(self._get_state.lower().title())

    def _generate_names(self):
        clear()
        print("Generating names......")
        baseURL = 'https://www.randomlists.com/fake-name-generator'

        self._driver.get(baseURL)

        data = WebDriverWait(self._driver, 30).until(
            EC.presence_of_element_located((By.CLASS_NAME, 'Rand-stage')))

        list_of_names = data.find_elements_by_tag_name('li')
        num_of_names = len(list_of_names)
        i, j = random.sample(range(num_of_names), 2)
        name = list_of_names[i].text.strip()

        self._fatherName = list_of_names[j].text.strip().split()[0]
        self._firstname = name.split()[0]
        self._lastname = name.split()[1]
        self._sex = random.choice(['M', 'F'])
        print("Got Name ☺!")

    # def _generate_names(self):
    #     clear()
    #     print("Generating names......")
    #     perform = Tools(self._driver)
    #     baseURL = 'https://www.fakenamegenerator.com/'
    #     self._driver.get(baseURL)
    #     name_XPATH = '//*[@id="details"]/div[2]/div[2]/div/div[1]/h3'
    #     sex_value = random.choice(['male', 'female'])
    #     perform.set_select_by_ID('gen', sex_value)
    #     perform.click_button_by_ID('genbtn')
    #     time.sleep(5)
    #     name = WebDriverWait(self._driver, 30).until(
    #         EC.presence_of_element_located((By.XPATH, name_XPATH))).text
    #     time.sleep(2)
    #     perform.set_select_by_ID('gen', 'male')
    #     perform.click_button_by_ID('genbtn')
    #     time.sleep(2)
    #     father_fullname = WebDriverWait(self._driver, 30).until(
    #         EC.presence_of_element_located((By.XPATH, name_XPATH))).text
    #     father_fullname = father_fullname.split()
    #
    #     self._firstname = name.split()[0]
    #     self._fatherName = father_fullname[0]
    #     self._lastname = father_fullname[2]
    #     if sex_value == 'male':
    #         self._sex = 'M'
    #     else:
    #         self._sex = 'F'
    #     print(f"{self._firstname} {self._fatherName} {self._lastname}")

    def _generate_address(self):
        print("Generating Address....")
        # baseURL = 'https://www.google.com/maps'
        #
        # search_bar_input_ID = 'searchboxinput'
        # search_bar_btn_ID = 'searchbox-searchbutton'
        # nearby_btn_XPATH = '//button[contains(@data-value,"Nearby")]'
        # click_nearby_res_XPATH = '//span[contains(.,"Restaurants")]'
        # share_btn_XPATH = '//button[contains(@aria-label,"Share")]'
        # address_XPATH = '//*[@id="pane"]/div/div[1]/div/div/div[9]/div/div[1]/span[3]/span[3]'
        # address_CLASS = 'section-share-summary-subtitle'
        # select_first_res_addr_CLASS = 'section-result-text-content'
        #
        # new_tab(self._driver, baseURL)
        # time.sleep(1)
        # switch_tab(self._driver, 'maps')
        # perform = Tools(self._driver)
        # perform.set_input_by_ID(search_bar_input_ID, self._college_name)
        # time.sleep(5)
        # perform.click_button_by_ID(search_bar_btn_ID)
        # time.sleep(3)
        # perform.click_button_by_XPATH(nearby_btn_XPATH)
        # time.sleep(3)
        # perform.click_button_by_XPATH(click_nearby_res_XPATH)
        # time.sleep(3)
        # restuarant_list = WebDriverWait(self._driver, 40).until(
        #     EC.presence_of_all_elements_located((By.CLASS_NAME, select_first_res_addr_CLASS))
        # )
        # index = random.choice(range(len(restuarant_list)))
        # if index == 10:
        #     index = 2
        # time.sleep(2)
        # restuarant_list[index].click()
        # time.sleep(3)
        # address = ""
        # perform.click_button_by_XPATH(share_btn_XPATH)
        # try:
        #     address = WebDriverWait(self._driver, 40).until(
        #         EC.presence_of_element_located((By.CLASS_NAME, address_CLASS))
        #     ).text
        # except Exception as e:
        #     print("Got error!")
        # print("Got Address ☺!")
        # address = address.split(',')
        # self._street_address = address[0].strip()
        # self._city = address[1].strip()
        # self._state = address[2].strip().split()[0]
        # self._zip_code = address[2].strip().split()[1]

        try:
            baseURL = 'https://www.bing.com/maps'
            new_tab(self._driver, baseURL)
            switch_tab(self._driver, 'maps')
            perform = Tools(self._driver)
            perform.set_input_by_ID('maps_sb', self._college_name)
            time.sleep(1)
            perform.click_button_by_XPATH('//a[contains(@title,"Search Bing Maps")]')
            perform.click_button_by_XPATH('//a[contains(@aria-label,"Restaurants")]/div')
            resturant_elem = WebDriverWait(self._driver, 30).until(
                EC.presence_of_element_located((By.ID, 'OverlayListingEntitiesContainer'))
            )
            time.sleep(2)
            resturant_list = resturant_elem.find_elements_by_tag_name('li')
            index = random.choice(range(len(resturant_list)))
            resturant_list[index].click()
            time.sleep(3)
            address_elem = WebDriverWait(self._driver, 30).until(
                EC.presence_of_element_located((By.XPATH, '//*[@class="b_address"]'))
            )
            address = address_elem.text
            print("Got Address ☺!")
            address = address.split(',')
            self._street_address = address[0].strip()
            self._city = address[1].strip()
            self._state = address[2].strip().split()[0]
            self._zip_code = address[2].strip().split()[1]
        except Exception:
            print("Got Address")
            self._street_address = '2142 W El Segundo Blvd'
            self._city = 'Gardena'
            self._state = 'CA'
            self._zip_code = '90249'

    def _generate_ssn(self):
        print("Generating SSN....")
        baseURL = 'https://www.ssn-verify.com/generate'
        perform = Tools(self._driver)
        state_control_ID = 'state'
        year_control_ID = 'year'
        btn_submit_ID = 'ssn-submit'
        result_ssn_CLASS_NAME = 'result-ssn'

        new_tab(self._driver, baseURL)
        switch_tab(self._driver, 'ssn-verify.com')

        perform.set_select_by_ID(state_control_ID, self._get_state.lower())
        time.sleep(1.3)
        perform.set_select_by_ID(year_control_ID, "1997")
        # time.sleep(4)

        # time.sleep(3)
        ssn_number = None
        while True:
            try:
                ssn_number = WebDriverWait(self._driver, 40).until(
                    EC.presence_of_element_located((By.CLASS_NAME, result_ssn_CLASS_NAME))).text
                perform.click_button_by_ID(btn_submit_ID)
                time.sleep(1)
                if ssn_number != 'XXX-XX-XXXX':
                    break
            except Exception as e:
                print(e)
        print("Got SSN ☺!")
        self._ssn = ssn_number

    def _generate_phone_number(self):
        print("Generating phone numbers....")
        baseURL = 'https://www.fakephonenumber.org'

        new_tab(self._driver, baseURL)
        switch_tab(self._driver, 'fakephonenumber')

        city_input_XPATH = '//input[@name="city"]'
        generate_btn_XPATH = '//button[contains(.,"Generate")]'
        perform = Tools(self._driver)
        perform.set_input_by_XPATH(city_input_XPATH, self._city)
        time.sleep(2)
        perform.click_button_by_XPATH(generate_btn_XPATH)

        phone_numbers_elem = WebDriverWait(self._driver, 30).until(
            EC.presence_of_all_elements_located((By.XPATH, '//*[@class="numbers"]')))
        phone_list = []
        for p in phone_numbers_elem:
            if p.text.split(':')[0] == 'Mobile':
                phone_list.append(p.text.split(':')[1].strip())
        print("Got Phone numbers ☺!")
        i, j = random.sample(range(len(phone_list)), 2)
        self._phone_num = phone_list[i]
        self._parent_phone_num = phone_list[j]

    def get_student_info(self):
        info = {}
        self._generate_names()
        self._generate_address()
        self._generate_ssn()
        self._generate_phone_number()

        print("Done generating student info ☺!")
        info["firstname"] = self._firstname
        info["lastname"] = self._lastname
        info["sex"] = self._sex
        info["ssn"] = self._ssn
        info["fathername"] = self._fatherName
        info["phone_num"] = self._phone_num
        info["parent_phone"] = self._parent_phone_num
        info["street_adr"] = self._street_address
        info["city"] = self._city
        info["state"] = self._state
        info["zipcode"] = self._zip_code

        self._driver.quit()
        return info
