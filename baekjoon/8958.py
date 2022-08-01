T=int(input())
for i in range(T):
    OX = input()
    cnt=0
    sum=0
    for j in OX:
        if j=="O":
            cnt+=1
            sum+=cnt
        else:
            cnt=0
    print(sum)