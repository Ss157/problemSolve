#정수를 입력받아서 소수를 판별하는 함수 
# is_prime()를 작성하기
#소수면 True를 아니면 False를 출력해라

def is_prime(num):
    flag=""
    for i in range(2,num):
        if num%i==0:
            flag="False"
            break
        else:
            flag="True"
    return flag
number=int(input())
print(is_prime(number))