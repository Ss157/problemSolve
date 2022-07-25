#입력받은 문자열의 공백을 제거한 문자열을 출력하자
statements=input("문자열 :")
result=''
for i in statements:
    if not i==' ':
        result+=i
print("입력된 문자열 :",statements)
print("공백을 제거한 문자열 :",result)