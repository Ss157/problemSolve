from socket import AF_KEY


numArray=[]
for i in range(9):
    num=int(input())
    numArray=numArray+[num]
print(max(numArray))
print(numArray.index(max(numArray))+1)
