#입력
#두 개의 정수 입력받기
#과정
#두 수 중 더 큰 수가 무엇인지 판별하기
#결과
#더 큰 수 출력하기

num1=int(input("첫번째 정수를 입력하세요."))
num2=int(input("두번째 정수를 입력하세요."))

if num1>num2:
    maximum=num1
else:
    maximum=num2
print(maximum)