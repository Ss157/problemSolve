import math
n,r=map(int,input().split())
muti=n
for i in range(1,r):
    muti*=(n-i)
    
divi=math.factorial(r)
print(int(muti/divi))