nA,nB=map(int,input().split())
AList=list(map(int,input().split()))
BList=list(map(int,input().split()))
AnBList=sorted(list(set(AList)-set(BList)))
print(len(AnBList))
for i in AnBList:
    print(i,end=' ')