from handy.accountDetails import AccountDetail
from handy.useful_functions import get_email, onehack_banner, vpn_banner
from pages.lasouthwest import Southwest
from pages.opencccForm import OpencccForm

onehack_banner()
vpn_banner()
email = get_email()
college_name = "Los Angeles Southwest College"
accountdetail = AccountDetail(college_name=college_name)
student_info = accountdetail.get_student_info()
print(student_info)
opencccform = OpencccForm(student_info, email, college_name)
username, password = opencccform.fill_form()
southwest = Southwest(username, password, student_info)
southwest.start_process()
