str1=input()
sum=0
for i in range(len(str1)):
    sum+=ord(str1[i])
    print("%03d"%(ord(str1[i])),end='')
print(sum%10,end='')
print(sum//len(str1)%10)

str2=input()
for i in range(len(str2)//3):
    print(chr(int(str2[i*3])*100+int(str2[i*3+1])*10+int(str2[i*3+2])),end='')
