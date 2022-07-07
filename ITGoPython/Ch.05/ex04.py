#디버깅:에러를 잡아나가는 과정
sum=0
for i in range(1,101):
    if sum>=2000:
        break
    else:
        sum+=i
print("합계는 %d"%sum)
print("누적된 횟수",i-1)