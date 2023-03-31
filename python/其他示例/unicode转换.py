str1=input()
print(str1.encode('unicode_escape'))

str2=input()
print(str2.encode("utf-8").decode('unicode_escape'))

str3=input()
for i in range(len(str3)):
    print(ord(str3[i]))
