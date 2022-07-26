T=int(input())
for rep in range(T):
    cnt=0
    N,M=map(int,input().split())
    importance=list(map(int,input().split()))
    for i in range(N):
        if importance[M]==max(importance):
            