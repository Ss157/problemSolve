#정수를 받아 제곱을 하는 함수
def squared(num):  #함수 선언부
    num=num*num   #함수 구현부
    return num   #반환값 처리
num=int(input("제곱할 수를 입력하세요. :"))
print("제곱한 수 :",squared(num))

