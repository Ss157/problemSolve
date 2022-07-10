from string import ascii_lowercase
alphabetList=list(ascii_lowercase)

str1=input()
for i in range(len(alphabetList)):
    for j in range(len(str1)):
        if str1[j] in alphabetList[i]:
            print(j, end=' ')
            break
        else:
            print(-1, end=' ')