from selenium import webdriver
from selenium.webdriver.chrome.options import Options

options = Options()
options.add_argument('--headless')
n = webdriver.Chrome(options=options)

n.get('https://mail.google.com/mail/u/0/#inbox')
n.save_screenshot('C:/Users/Matheus Brandão/Desktop/image.png')

n.quit()