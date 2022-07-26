N=int(input())
numList=[]
for i in range(N):
    numList+=[int(input())]
numList.sort()
for i in range(N):
    print(numList[i])