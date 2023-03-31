a,b,c=map(str,input().split())
a=int(a)
months={'January':31,'February':28,'March':31,'April':30,'May':31,'June':30,'July':31,'August':31,'September':30,'October':31,'November':30,'December':31}
days=['Sunday','Monday','Tuesday','Wednesday','Thursday','Friday','Saturday']

print(a,end='')
print((35-len(b)-len(c))*' '+b+'\n'+'Sun  Mon  Tues Wed  Thur Fri  Sat')


j=days.index(c)
print(j*5*' ',end='')
if a%4==0 and a%100!=0 or a%400==0:
    months['February']=29
for i in range(months[b]):
    if i+1<10:
        print('0'+str(i+1),'  ',end='')
    else:
        print(str(i+1),'  ',end='')
    j+=1
    if j==7:
        print()
        j=0
