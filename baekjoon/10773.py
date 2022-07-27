K=int(input())
numList=[]
for i in range(K):
    num=input()
    if num=="0":
        numList.remove(numList[len(numList)-1])
    else:
        numList+=[int(num)]
if sum(numList)<=2**31-1:
    print(sum(numList))