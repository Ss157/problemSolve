#문자열을 입력받아서 숫자,문자, 스페이스의 개수를 출력해라
atr_1=input("문자열 :")
num1=0
numa=0
num_=0
for i in atr_1:
    if i.isdigit():
        num1+=1
    elif i.isalpha():
        numa+=1
    elif i.isspace():
        num_+=1
print("숫자의 개수 :",num1)
print("알파벳의 개수 :",numa)
print("스페이스의 개수 :",num_)