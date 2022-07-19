Minscore=list(map(int,input().split()))
Manscore=list(map(int,input().split()))
S=sum(Minscore)
T=sum(Manscore)
if S>=T:
    print(S)
else:
    print(T)