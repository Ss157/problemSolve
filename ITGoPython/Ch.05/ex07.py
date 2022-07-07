#화씨온도=섭씨온도 변환 테이블을 출력하기
#화씨 0~100도 까지 10도씩 증가시키면서 대응되는 섭씨
#온도를 대응되는 섭씨온도를 출력하도록 하자.
#입력
#없음
#과정 화씨를 섭씨로 변환하기
#출력 각 화씨를 섭씨로 변환하여 출력하기
#Fahrenheit=0 화씨(미국에서 사용)
#Celsius=0 섭씨(한국등에서 사용)
for i in range(0,101,10):
    Fahrenheit=i
    Celsius=(Fahrenheit-32)*5/9
    print("화씨 %.2f도 일때, 섭씨 %.2f도 이다."%(Fahrenheit,Celsius))