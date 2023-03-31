from selenium import webdriver
driverfile_path = r'D:\desktop\edgedriver_win64\msedgedriver.exe'
driver = webdriver.Edge(executable_path=driverfile_path)
n=input()
driver.get("http://music.163.com/song/media/outer/url?id="+n)
