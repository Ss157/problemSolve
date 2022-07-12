T = int(input())
score = list(input())
maxScore = max(score)
for i in range(T):
    if maxScore!=score[i]:
        score[i]=score[i]/maxScore*100
    sum+=score[i]
avg=sum/len(score)
print(avg)