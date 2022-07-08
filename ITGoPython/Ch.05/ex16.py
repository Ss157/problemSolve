#플래그 변수를 사용한 무한루프
#1. 가속, 2. 감속, 3.중지
#입력 1,2,3
#처리 1=속도 10 증가, 
#2=속도 10감소, 3=플래그 변수 사용하여 중지
flag=True
speed=0
while flag:
    command=int(input("1:가속,2:감속,3:중지 : "))
    if command==1:
        speed+=10
        print("현재 속도는 %d입니다."%speed)
    elif command==2:
        speed-=10
        print("현재 속도는 %d입니다."%speed)
    elif command==3:
        print("중지합니다.")
        flag=False
    else:
        print("잘못된 입력값입니다.")