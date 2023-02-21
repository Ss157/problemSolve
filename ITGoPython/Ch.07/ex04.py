#mutable object 중 dictionary 라는 타입이 있다.
#딕셔너리라는 타입의 형태는 키와 값의 쌍으로 이루어져 있다.
#딕셔너리의 키의 값은 유니크한 값이 되야 함. but 값은 변경 가능
#딕셔너리의 call by reference 가 성립되는 이유는 변경가능한 객체이기 때문.
#call by objective-reference라고도 칭함

def change(dic):
    print("change()내의 연산전의 dic 값 : ",dic)
    print("change()내의 연산전의 dic의 주소(id) : ",id(dic))
    dic["weight"]=42
    print("change()내의 연산후의 dic 값 : ",dic)
    print("change()내의 연산후의 dic의 주소(id) : ",id(dic))

dic = {"name":"신은혁", "age":14, "height":160}
print("호출전의 dic 값 : ",dic)
print("호출전의 dic의 주소(id) : ",id(dic))
change(dic)
print("호출후의 dic 값 : ",dic)
print("호출후의 dic의 주소(id) : ",id(dic))
#print(dic)
# 키를 주고 값을 얻어온다.
#print(dic["name"])