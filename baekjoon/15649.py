#입력
from math import factorial

N,M=map(int,input().split())
#처리
numList=[]
for i in range(N):
    numList+=[i]
for i in range(factorial(N)):
    for j in range(M):
        print()
    print()