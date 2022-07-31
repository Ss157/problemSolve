N=int(input())
numList=list(map(int,input().split()))
Y_money=0
M_money=0
for i in range(N):
    Y_money+=(numList[i]//30+1)*10
    M_money+=(numList[i]//60+1)*15
if Y_money>M_money:
    print("M %d"%M_money)
elif Y_money<M_money:
    print("Y %d"%Y_money)
else:
    print("Y M %d"%M_money)