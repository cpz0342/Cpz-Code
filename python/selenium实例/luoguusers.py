from selenium import webdriver

driverfile_path = r'D:\desktop\edgedriver_win64\msedgedriver.exe'
driver = webdriver.Edge(executable_path=driverfile_path)


for i in range(620000,700000):
    driver.get('https://www.luogu.com.cn/user/'+str(i))
    if('k' in driver.title)and('j' in driver.title):
        print(i,driver.title[0:driver.title.find(' '):])
