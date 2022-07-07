#논리연산자
#and(논리곱), or(논리합), not(논리부정)
name = "홍길동"
age=18
height=165

if age>=13 and height>=145:
    print(name ,"님은 탑승 가능합니다.")
else:
    print(name ,"님은 탑승 불가능합니다.")

if age>=13 or height>=145:
    print(name ,"님은 탑승 가능합니다.")
else:
    print(name ,"님은 탑승 불가능합니다.")

if not 1==0:
    print("참입니다.")
else:
    print("거짓입니다.")