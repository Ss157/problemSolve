#입력
#몸무게와 키를 입력받기
#처리
#bmi를 계산한 후, 
#20이상, 25미만은 표준이고, 이게 아니면 체중관리 필요하다는 판단내리기
#결과
#bmi출력하고 정상체중혹은 체중관리 필요를 출력하기

weight=float(input("당신의 체중(kg)을 입력하세요."))
height=float(input("당신의 키(m)를 입력하세요."))

BMI=weight/(height**2)
if BMI>=20 and BMI<25:
    print("BMI지수는 ",BMI,"이고, 정상체중입니다.")
else:
    print("BMI지수는 ",BMI,"이고, 체중관리가 필요한 상태입니다.")