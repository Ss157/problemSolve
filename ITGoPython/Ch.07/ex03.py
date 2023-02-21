#call by reference 에 대한 실습
#함수를 호출할 때, 실질적인 주소값이 넘어가서 호출한 곳에 영향을 끼치는 형태가 된다.
#파이썬에서는 함수의 매개변수값이 전부 객체인데 list, dictionary 와 같은
#mutable object 즉 변경 가능한 객체이므로 call by objective-reference라고 함

def change(list):
    print("change()내의 연산전의 list 값 : ",list)
    print("change()내의 연산전의 list의 주소(id) : ",id(list))
    list+=[100,200]
    print("change()내의 연산후의 list 값 : ",list)
    print("change()내의 연산후의 list의 주소(id) : ",id(list))

li = ["안녕",1,2,3,1.1]
print("호출전의 li 값 : ",li)
print("호출전의 li의 주소(id) : ",id(li))
change(li)
print("호출후의 li 값 : ",li)
print("호출후의 li의 주소(id) : ",id(li))