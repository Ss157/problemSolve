str1=input()
str2=input()
cnt=0
for i in range(len(str1)):
    if not str1[i] in str2:
        cnt+=1
for i in range(len(str2)):
    if not str2[i] in str1:
        cnt+=1
print(cnt)