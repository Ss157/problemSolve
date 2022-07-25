#입력받은 문자열을 거꾸로 출력해라
statements=input("문자열 :")
for i in range(len(statements)-1,-1,-1):
    print(statements[i],end='')

print()

sList=list(statements)
sList.reverse()  #reverse()는 리스트를 역순으로 만드는 함수
print("".join(sList))

print(statements[::-1]) #역순으로 출력
print(statements[3::-1]) #3번째 인덱스부터 역순으로 출력
