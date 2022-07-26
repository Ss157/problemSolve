#사칙연산 계산기
#더하기 함수
def add(a,b):
    return a+b
#빼기 함수
def substract(a,b):
    return a-b
#곱하기 함수
def mutiply(a,b):
    return a*b
#나누기 함수
def divide(a,b):
    return round(a/b,2)

while True:
    x,y=map(float,input("두 수를 입력하세요. : ").split())
    oper=input("원하는 연산자를 입력하세요.(+,-,*,/) : ")
    if oper=="+":
        print(add(x,y))
    elif oper=="-":
        print(substract(x,y))
    elif oper=="*":
        print(mutiply(x,y))
    elif oper=="/":
        print(divide(x,y))
    else:
        print("잘못된 입력입니다.")
    YorN=input("계산을 계속하시겠습니까?(y,n) : ")
    if YorN=="n":
        break