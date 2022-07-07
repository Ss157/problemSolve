#수학에서의 팩토리얼에 대한 프로그램짜기
#팩토리얼 = 1*2*3*4*%*...*n
num=int(input())
factorial=1
for n in range(1,num+1):
    factorial *=n
print("팩토리얼값은 %d이다."%factorial)