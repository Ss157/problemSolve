num=int(input())
newNum=num
cycleL=0
while True:
    num1=str(newNum%10)
    num2=str((newNum//10+newNum%10)%10)
    newNum=int(num1+num2)
    cycleL+=1
    if num==newNum:
        break
print(cycleL)