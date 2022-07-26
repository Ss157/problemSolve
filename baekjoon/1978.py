N=int(input())
j=0
cnt=0
numList=list(map(int,input().split()))
for i in numList:
    for j in range(2,i+1):
        if i%j==0:
            break
    if i==j:
        cnt+=1
print(cnt)