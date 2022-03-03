import pyautogui
from time import sleep
from selenium import webdriver
from selenium.webdriver.chrome.options import Options
from selenium.webdriver.common.by import By

options = Options()
options.add_argument('--headless')
driver = webdriver.Chrome(options=options)


pyautogui.hotkey('win', 'r')
sleep(1)
pyautogui.write('cmd')
pyautogui.press('enter')
sleep(1)
pyautogui.write('cd Desktop')
pyautogui.press('enter')
sleep(1)
pyautogui.write('mkdir Pasta')
pyautogui.press('enter')
sleep(1)
pyautogui.write('exit')
pyautogui.press('enter')
sleep(1)
print('Navegador aberto!')
driver.get('https://www.google.com/')
print('Site aberto!')
x = driver.find_element(By.XPATH,'/html/body/div[1]/div[2]/div/img')
print('Encontrei o elemento!')
x.screenshot('C:/Users/Matheus Brandão/Desktop/Pasta/image.png')
print('Tirei a foto do elemento!')
driver.save_screenshot('C:/Users/Matheus Brandão/Desktop/Pasta/image2.png')
print('Tirei a foto da página!')

driver.quit()