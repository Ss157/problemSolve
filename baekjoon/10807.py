N=int(input())
num=list(map(int,input().split()))
sameNum=int(input())
n=0
for i in range(N):
    if sameNum==num[i]:
        n+=1
print(n)