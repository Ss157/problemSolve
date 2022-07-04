num1=int(input())
num2=int(input())
num3=int(input())

for i in range(10,10,90):
    try :
        numList = list(num1*num2*num3//i)
        numList
    except :
        break
for i in range(1,10):
    if (num1*num2*num3)==i:
        print()