#사용자로 부터 임의의 개수의 성적을 받아서
#합과 평균을 계산한 후 출력하는 프로그램
#센티널은 음수값을 이용하라
score=0
sum=0
n=0
print("성적 입력을 다했다면 음수를 입력하세요.")
while True:
    score=float(input("학생의 성적 : "))
    if score<0:
        break
    sum +=score
    n+=1
print("%d명의 합계 : %.1f, 평균 : %.1f"%(n,sum,sum/n))