cambriList=['C','A','M','B','R','I','D','G','E']
str_1=list(input())
for j in range(len(str_1)):
    if not str_1[j] in cambriList:
        print(str_1[j],end='')