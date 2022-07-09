grade=input()
for i in range(1):
    if grade[i]=="A":
        score=4.0
    elif grade[i]=="B":
        score=3.0
    elif grade[i]=="C":
        score=2.0
    elif grade[i]=="D":
        score=1.0
    else:
        score=0.0
        break
    for j in range(1,2):
        if grade[j]=="+":
            score+=0.3
        elif grade[j]=="0":
            score=score
        else:
            score-=0.3
print(score)