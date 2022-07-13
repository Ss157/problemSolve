M=int(input())
N=int(input())
numList=[]
for i in range(1,100):
    numList+=[i]
i=M
mutiNumList=[]
while True:
    if i==N:
        break
    if i**2 in numList:
        mutiNumList.append(i**2)
    i+=1
n=0
for j in range(len(mutiNumList)):
    n+=mutiNumList[j]
    if j==len(mutiNumList):
        print(n)
        print(mutiNumList[0])