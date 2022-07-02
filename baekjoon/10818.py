numCount=int(input())
numArray=list(map(int,input().split()))
'''
for i in range(numCount):
    if numArray[i]>numArray[i+1]:
        max=numArray[i]
    if numArray[i]<numArray[i+1]:
        min=numArray[i]'''
min=min(numArray)
max=max(numArray)
print(min,max)