from selenium import webdriver

driverfile_path = r'D:\desktop\edgedriver_win64\msedgedriver.exe'
driver = webdriver.Edge(executable_path=driverfile_path)

t=input()
while(t!=''):
    t=input()
    driver.get('https://www.luogu.com.cn/user/'+str(t))
    print(t,driver.title[0:driver.title.find(' '):])
