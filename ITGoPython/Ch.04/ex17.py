#정수 입력
#음,0,양 판단
#3중 무엇인지 출력

num=int(input("정수 입력하세요. : "))
if num>0:
    print("양수입니다.")
elif num<0:
    print("음수입니다.")
else:
    print("0입니다.")