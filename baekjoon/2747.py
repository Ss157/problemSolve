n=int(input())
n0=0
n1=1
n2=0
if n==0:
    n2=0
elif n==1:
    n2=1
        
for i in range(1,n):
    n2=n1+n0
    n0=n1
    n1=n2
print(n2)
        