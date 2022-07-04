#인덱싱
#문자열에서 문자를 추출하는데 문자열에는 각각에 해당하는 문자에 번호가 인덱스

word = "Python"
print(len(word))
print(word[0])
print(word[5])
print(word[len(word)-1]) #마지막 꺼의 번호

#index out of range라는 오류 발생됨.
#print(word[100])

#다른 언어에서는 가능하지만 파이썬에서는 안 된다.
#word[2]='b'

#입력
item1=input()
item2=input()
item3=input()
newItem=item1[0]+item2[0]+item3[0]
print(newItem)

