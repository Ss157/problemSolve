#임의의 숫자를 발생시켜 그 숫자를 맞추는 게임
import random
x=random.randint(1,100)
n=0
while n<10:
    userNum=int(input("정수를 입력하세요. : "))
    n+=1
    if x==userNum:
        print("%d번만에 맞추었습니다. 대단해요!"%n)
        break

    if userNum>x:
        print("더 작은 수입니다.")
    elif userNum<x:
        print("더 큰 수입니다.")