firstNum,lastNum=map(int,input().split())
sum=0
while True:
    sum+=firstNum
    if lastNum==firstNum:
        break
    firstNum+=1
print(sum)