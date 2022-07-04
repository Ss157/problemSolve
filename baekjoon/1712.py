fixedCost,variableCost,price=map(int,input().split())
if variableCost>=price:
    print(-1)
else:
    print(fixedCost//(price-variableCost)+1)