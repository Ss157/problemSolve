N=int(input())
AList=list(map(int,input().split()))
BList=list(map(int,input().split()))
BList.sort(reverse=False)
AList.sort(reverse=True)
sum=0
for i in range(N):
    sum+=AList[i]*BList[i]
print(sum)