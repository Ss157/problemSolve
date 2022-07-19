numArray=[]
for i in range(5):
    numArray+=[int(input())]
numArray.sort()
print(sum(numArray)/5)
print(numArray[2])