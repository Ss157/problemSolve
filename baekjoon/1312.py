A,B,N=map(int,input().split())
num=A/B
if N%2==0:
    for i in range(N/2):
        num*=100
else:
    for i in range(N):
        num*=10
print(int(num%10))