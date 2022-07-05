#입력
#문자열 입력받기
#과정
#문자열의 중앙에 있는 문자파악하기
#출력
#문자열의 중앙에 있는 문자 출력하기

word=input()
length=len(word)
if length%2==1:
    ch=word[length//2]
else:
    ch=word[length//2-1],word[length//2]
print(ch)
