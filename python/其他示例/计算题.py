import random
daduitishu=0
tishu=int(input("你要答几题？"))
for i in range(tishu):
    a=random.randint(0,10)
    b=random.randint(0,10)
    j=random.randint(1,4)
    if j==1:
        c=a+b
        daan=c
        print(a,"+",b,"=")
    if j==2:
        c=a+b
        daan=a
        print(c,"-",b,"=")
    if j==3:
        c=a*b
        daan=c
        print(a,"*",b,"=")
    if j==4:
        a=random.randint(1,10)
        b=random.randint(1,10) 
        c=a*b
        daan=a
        print(c,"/",b,"=")
    huida=int(input(''))
    if daan==huida:
        daduitishu+=1
print('你答对了',daduitishu,'题')    
        
        








