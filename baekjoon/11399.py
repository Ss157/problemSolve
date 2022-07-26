N=int(input())
numList=list(map(int,input().split()))
numList.sort()
sum=0
for i in range(0,N):
    sum+=numList[i]*(N-i)
print(sum)