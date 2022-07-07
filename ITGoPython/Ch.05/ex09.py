#입력
#두개의 정수
#처리&결과
#첫 정수에서 두번째 정수까지의 범위해서 3의 배수이고
#4의 배수가 아닌 것을 출력하라

num1=int(input("첫번째 정수 : "))
num2=int(input("두번째 정수 : "))
n=0
for n in range(num1,num2+1):
    if n%3==0 and n%4==0:
        continue
    print(n, end= ' ')
    
    