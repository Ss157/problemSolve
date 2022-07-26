M=int(input())
N=int(input())
sum=0
divi=0
primeList=[]
for i in range(M,N+1):
    for divi in range(2,i+1):
        if i%divi==0:
            break
    if i==divi:
        sum+=i
        primeList+=[i]
if primeList==[]:
    print(-1)
else:
    print(sum)
    print(primeList[0])