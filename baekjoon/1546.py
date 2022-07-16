T = int(input())
score = list(map(float,input().split()))
maxScore = max(score)
sum=0
for i in range(T):
    score[i]=score[i]/maxScore*100
    sum+=score[i]
print(sum/T)