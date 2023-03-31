#P1786 帮贡排序
from random import randint
n=randint(1,50)
print(n)
zwnames=["BangZhu","FuBangZhu","HuFa","ZhangLao","TangZhu","JingYing","BangZhong"]
zw=0
bg=0
for i in range(n):
    name=''
    for j in range(randint(3,15)):
        name+=chr(randint(97,122))
    zw=randint(0,6)
    bg=randint(1,100000)
    dj=randint(1,100)
    print(name,zwnames[zw],bg,dj)
    
