for i in range(int(input())):
    statements=list(map(int,input().split()))
    N=statements[0]
    statements.remove(N)
    avg=sum(statements)/N
    cnt=0
    for j in range(N):
        if statements[j]>avg:
            cnt+=1
    print("%.3f"%(cnt/N*100),end='')
    print("%")