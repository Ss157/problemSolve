#입력
#수화물의 무게
#과정
#20kg이 넘으면 20000원 더 내고
#20kg은 수수료는 없다.
#결과
#지불해야 하는 금액 출력

weight=float(input("수화물 무게를 입력하세요 :(kg)"))
if weight>=20:
    print("20,000원의 추가요금이 발생했습니다.")
else :
    print("기본요금만이 발생했습니다.")
print("감사합니다. 고객님^^")