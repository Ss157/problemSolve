fruit = "apple"
for letter in fruit:
    print(letter, end=' ')

aeiou=['a','e','i','o','u','A','E','I','O','U']
letter=input("문자열 입력 :")
for i in letter:
    if i not in aeiou:
        print(i,end='')
