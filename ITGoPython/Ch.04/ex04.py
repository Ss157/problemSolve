#불 변수 알아보기(bool 변수)
#부울 변수는 플래그 변수 형태로 사용을 많이 한다.
flag = True
print(type(flag))
print(flag)

flag = not flag
print(type(flag))
print(flag)

if flag == True :
    print("참")
else :
    print("거짓")