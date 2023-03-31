from selenium import webdriver
driverfile_path = r'D:\desktop\edgedriver_win64\msedgedriver.exe'
driver = webdriver.Edge(executable_path=driverfile_path)
driver.get('https://www.baidu.com')
