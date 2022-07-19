T=int(input())
n1=1
n2=1
n3=0
for i in range(3,T+1):
    n3=n1+n2
    n1=n2
    n2=n3
print(n3)