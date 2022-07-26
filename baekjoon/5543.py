bugerMoneyList=[]
for i in range(3):
    bugerMoneyList+=[int(input())]
coke=int(input())
cider=int(input())
low_price=min(bugerMoneyList)+min(coke,cider)-50
print(low_price)