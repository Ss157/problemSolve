N,M=map(int,input().split())
ns=set()
for i in range(N):
    ns.add(input())
nh=set()
for i in range(M):
    nh.add(input())
nsh=[]
nsh=sorted(list(ns & nh))
print(len(nsh))
for i in nsh:
    print(i)