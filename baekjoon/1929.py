M,N=map(int,input().split())
i=M
for j in range(M+1,N+1):
    if i%j!=0:
        print(i)
    i+=1