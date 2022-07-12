from string import ascii_uppercase
str_1=input()
str_1.upper()
i=0
for i in range(len(ascii_uppercase)):
    for j in range(len(str_1)):
        if str_1[j] in ascii_uppercase:
            j+=1