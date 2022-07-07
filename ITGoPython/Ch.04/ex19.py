#입력
#태어난 입력받기
#과정
#학생의 초, 중, 고, 대를 판별하기
#그걸 출력하기
#8-13/14-16,17-19,20-27
#이 이외는 학생이 아님을 출력
birthYear=int(input())
nowYear=2022
age=nowYear-birthYear+1
print("%d살입니다."%age)
if 7<age<28:
    if 20<=age<=27:
        print("대학생입니다.")
    elif age>=17:
        print("고등학생입니다.")
    elif age>=14:
        print("중학생입니다.")
    elif age>=8:
        print("초등학생입니다.")
else:
    print("일반인입니다.")