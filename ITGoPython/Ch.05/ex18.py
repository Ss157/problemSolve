#중첩 루프(nested loop, double loop)
#반복문안에 또 다른 반복문이 있는 거
for i in range(5):
    for j in range(i+1):
        print("*", end='')
    print()

#format() 함수 이용
print("정수값 : {}, string : {}, float : {}".format(10,"안녕하세요",10.1))
print("정수값 : {0}, string : {1}, float : {2}".format(10,"안녕하세요",10.1))

#format()함수는 공간확보 및 0으로 채우는 기능도 지원한다.
#콜론(:)을 기준으로 우측에는 > 혹은 <를 사용해서 방향을 지정한다.

print("숫자 '{:>5d}'".format(300)) #5d는 양식문자로 5자리를 말함
print("숫자 '{:<5d}'".format(300))

for i in range(5):
    print("{:<5}".format('*'*(i+1)))

for i in range(5):
    for j in range(5, i, -1):
        print("*", end='')
    print()