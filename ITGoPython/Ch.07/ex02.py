#문자열 전달에 대한 실습

def change(string):
    print("change()내의 연산전의 string 값 : ",string)
    print("change()내의 연산전의 string의 주소(id) : ",id(string))
    string+="행복합니다."
    print("change()내의 연산후의 string 값 : ",string)
    print("change()내의 연산후의 string의 주소(id) : ",id(string))
    
msg="안녕하세요 저는 "
print("호출 전 msg 값 : " + msg)
print("msg의 주소(id) : ",id(msg))
change(msg)
print("호출 후 msg 값 : " + msg)
print("msg의 주소(id) : ",id(msg))
    