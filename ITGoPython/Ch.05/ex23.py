#전화번호 입력을 받는데 '-'를 적는 경우가 있다.
#"-"를 삭제한 문자열을 출력하자
phoneNum=input("전화번호를 입력하세요. :")
for i in phoneNum:
    if not i=='-':
        print(i,end='')