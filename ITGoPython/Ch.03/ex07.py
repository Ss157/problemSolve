#리스트에 대한 실습
#리스트는 여러 개의 값을 모아서 하나의 변수에 저장할
#수 있는 데이터 타입이다.
#리스트는 []이다.
from audioop import add
from traceback import print_tb


city=["London","NewYork","Seoul"]

print(len(city))
print(city)
print(city[2])

#리스트는 인덱스의 값이 변경이 가능한 객체이다.
city[1]="Paris"
print(city)
#파이썬에서 리스트는 정수, 문자열에 국한되지 않고
#여러 개의 값을 저장할 수 있다.
temp =["대구","부산",100,10.123]
print(temp)
name=input()
age=int(input())
address=input()
tall=float(input())
weight=int(input())
person=[name,age,address,tall,weight]
print(person)