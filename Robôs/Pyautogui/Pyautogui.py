from html.entities import html5
import pyautogui as p
import pyperclip as pp
from time import sleep

nome = str(input())
codigo = int(input())
padrao = 'Boa tarde %s, tudo bem?\nTem um chamado aqui no seu nome que está faltando somente sua ciência de resposta\nÉ só uma avaliação simples, caso precise de ajuda pra terminar pode entrar em contato comigo\nÉ o chamado de número %i' % (nome, codigo)
pp.copy(padrao)
sleep(0.5)
p.hotkey('win', 'r')
sleep(0.5)
p.write('notepad')
sleep(0.5)
p.press('enter')
sleep(0.5)
p.hotkey('ctrl', 'v')
sleep(0.5)
p.hotkey('ctrl', 's')
sleep(0.5)
p.write('Teste.txt')
sleep(0.5)
p.press('enter')