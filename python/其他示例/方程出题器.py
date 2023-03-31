#灵感来自寂寞酱（https://gitblock.cn/Users/1091432）的方程出题器（https://gitblock.cn/Projects/827613）

import random
x = random.randint(1,1000)/10 #设x为一个数，再出题
a = random.randint(1,10000)/100
b = random.randint(1,10000)/100
d = random.randint(1,2)
if d == 1:
  c = x * a + b
  print(str(a)+'x'+'+'+str(b)+'='+str(c))
  answer = float(input('x='))
if d == 2:
  c = x * a - b
  print(str(a)+'x'+'-'+str(b)+'='+str(c))
  answer = float(input('x='))
if answer == x:
  print('回答正确')
else:
  print('回答错误，正确答案为'+str(x))