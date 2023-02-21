#값에 의한 호출(call by value),값에 의한 전달(pass by value)
#함수를 호출할 때 값이 복사가 된다.(중요)

def change(num):
    num+=10
    print("change()내의 num 값",num)
    print("change()내의 num의 주소(id)",id(num))
    return num
#파이썬에서는 모든 값들이 객체로 이루어져 있다.
n =100
print("호출 전 n의 값",n)
x=change(n)
print("호출 후 x의 값",x)
print("x의 주소(id)",id(x))
print("호출 후 n의 값",n)
print("n의 주소(id)",id(n))