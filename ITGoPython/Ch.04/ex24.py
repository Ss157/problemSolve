#숫자 추측 게임을 만들기

import random

randomNum=random.randint(1,100)

print("1에서 100사이의 정수를 맞춰보세요!(≧∇≦)/")
cnt=0
while True:
    userNum=int(input("수를 입력하세요. : "))
    if userNum<randomNum:
        print("%d보다 큰 수입니다.(≧∇≦)/"%userNum)
    elif userNum>randomNum:
        print("%d보다 작은 수입니다.(≧∇≦)/"%userNum)
    else:
        break
    cnt+=1
print("%d번만에 맞추었습니다. 정말 대단해요.(≧∇≦)/"%cnt)
print("게임을 종료합니다.")