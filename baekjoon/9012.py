N=int(input())
for i in range(N):
    cnt_1=0
    cnt_2=0
    statements=input()
    if statements[0]==")" or statements[len(statements)-1]=="(":
        print("N0")
        pass
    for j in statements:
        if j=="(":
            cnt_1+=1
        else:
            cnt_2+=1
    if cnt_1==cnt_2:
        print("YES")
    else:
        print("NO")