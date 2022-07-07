#구구단
#입력
#몇 단에서 몇(1~9)
#과정
#for문이용해서 하기
#결과
#몇 단의 구구단 출력
num=int(input("구구단 중 몇 단을 보시겠습니까? : "))
print("구구단 %d단!"%num)
for i in range(1,10):
    if 1<=num<=9:
        print("%d * %d = %d"%(num,i,num*i))
    else:
        print("입력범위를 벗어났습니다.")
        break