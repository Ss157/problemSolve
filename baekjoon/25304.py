total_money=int(input())
n=int(input())
sum=0
for mon in range(n):
    a,b=map(int,input().split())
    sum+=a*b
if sum==total_money:
    print("Yes")
else:
    print("No")