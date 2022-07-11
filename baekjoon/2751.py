numList=[]
N=int(input())
for i in range(N):
    numList.append(input())
numList.sort()
for i in range(N):
    print(numList[i])