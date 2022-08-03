scoreList=[]
sum=0
for i in range(10):
    scoreList+=[int(input())]
for i in scoreList:
    if abs(100-i)<=abs(100-sum):
        sum+=i
print(sum)