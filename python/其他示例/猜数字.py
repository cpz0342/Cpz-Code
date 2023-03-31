import random
a = random.randint(0,1024)
cishu = 0
answer = 0
while answer != a :
    answer = int(input('请输入你猜的数字'))
    if answer > a :
        print('猜大了')
        cishu += 1
    elif answer < a :
        print('猜小了')
        cishu += 1
    else:
        print('猜对了')
        print('正确答案是'+str(a))
        print('你一共猜了'+str(cishu)+'次')