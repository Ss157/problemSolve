#섭씨 온도를 화씨 온도로 변환하여 반환하는 함수 
#FtoC()를 작성하시오.
def FtoC(fahren):
    return 5.0*(fahren-32)/9.0
temp=float(input("지금 화씨 온도는 몇 도 인가요?"))
print("섭씨온도는 %.2f이다."%FtoC(temp))