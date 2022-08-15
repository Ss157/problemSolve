for i in range(int(input())):
    score_p1=0
    score_p2=0
    for j in range(int(input())):
        s1,s2=map(str,input().split())
        if s1=="R":
            if s2=="P":
                score_p2+=1
            elif s2=="S":
                score_p1+=1
        elif s1=="P":
            if s2=="R":
                score_p1+=1
            elif s2=="S":
                score_p2+=1
        elif s1=="S":
            if s2=="R":
                score_p2+=1
            elif s2=="P":
                score_p1+=1
    if score_p1>score_p2:
        print("Player 1")
    elif score_p1<score_p2:
        print("Player 2")
    else:
        print("TIE")