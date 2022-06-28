fixCost,variableCost,price=map(int,input().split())
i=1
while True:
    if (fixCost+(variableCost*i))<(price*i):
        print(i)
        break
    elif variableCost>price:
        print(-1)
        break
    elif (fixCost+(variableCost*i))<(price*i):
        i+=1
        continue
    elif (fixCost/i)>10000:
        i=i+10000
