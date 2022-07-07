#nested if-else
#id 입력받기
#입력된 id를 리스트에 넣기
#등록된 id인지 판단하기
#등록되있는지 아닌지 출력하기
#등록되어있다면 password 물어보기(1234라고 가정)

IDList=["김연아","홍길동","손흥민","손연재","박지성"]
ID=input("ID를 입력해주세요. : ")
if ID in IDList: #사용자가 입력한 ID가 이 리스트에 있는지 확인하는 코드
    print("등록되어있는 ID입니다.")
    password=input("패스워드를 입력해주세요. : ")
    if password=="1234":
        print("올바른 패스워드입니다. %s님, 환영합니다."%ID)
    else:
        print("올바르지 않은 패스워드입니다. 다시 시도하세요.")
else:
    print("가입되어있지 않은 ID입니다.")
    print("회원가입하시겠습니까?")