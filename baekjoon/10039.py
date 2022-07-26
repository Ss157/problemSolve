score_list=[]
for i in range(5):
    score=int(input())
    if score<40:
        score_list+=[40]
    else:
        score_list+=[score]
avg=sum(score_list)/5
print(avg)