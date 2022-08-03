# 함수가 리턴값이 없는 거
def printInfo(name,age):
    print("===============")
    print("이름 : %s"%name)
    print("나이 : %d"%age)
    print("===============")
    #리턴값이 없으면 리턴 옆에 아무것도 적지 않는다.
    return 
end_Input="y"
while True:
    if end_Input=="n":
        print("입력을 종료합니다")
        break
    elif end_Input=="y":
        name=input("회원명을 입력해주세요 : ")
        age=int(input("회원님의 나이를 입력해주세요 : "))
        printInfo(name,age)
    end_Input=input("계속 입력하시겠습니까?(y/n) : ")
    