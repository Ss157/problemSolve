M,N=map(int,input().split())
divi=0
for i in range(M,N+1):
    for divi in range(2,i+1):
        if i%divi==0:
            break
    if i==divi:
        print(i)