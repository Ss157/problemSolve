from cmath import sqrt


A,B=map(int,input().split())
cnt=abs(A-B)
for i in range(int(input())):
    C=int(input())
    if cnt>abs(B-C):
        cnt=abs(B-C)
if cnt==abs(A-B):
    print(cnt)
else:
    print(cnt+1)