sum=0
numList=[]
for i in range(7):
    num=int(input())
    if num%2!=0:
        sum+=num
        numList+=[num]
if sum!=0:
    print(sum)
    print(min(numList))
else:
    print(-1)