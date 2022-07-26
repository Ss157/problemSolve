#함수에 대한 실습
#함수는 프로그램 안에서 중복된 코드를 제거한다.
#또, 복잡한 작업을 간단한 작업으로 분해할 수 있다.
#또, 재사용 가능하다.
#또, 가독성이 좋아지고 유지관리도 쉬워진다.


def say_hello(name):  #함수의 선언부
    print("안녕하세요, %s님"%name) #함수의 구현부

#함수 호출(function call)
say_hello("홍길동")
say_hello("철수")

#호출가능하긴 하지만 가독성이 떨어진다.
say_hello(10)

#값을 반환하는 함수 예제
#start부터 end까지의 누적합을 구하는 함수
def get_sum(start,end):
    sum=0
    for i in range(start,end+1):
        sum+=i
    return sum
print(get_sum(1,10))
print(get_sum(1,30))