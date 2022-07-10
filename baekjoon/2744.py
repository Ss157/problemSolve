str1=input()
for string in range(len(str1)):
    if str1[string].isupper():
        str1[string].lower()
        print(str1,end='')
    else:
        str1[string].upper()
        print(str1,end='')
print(str1)

print(str1.upper())