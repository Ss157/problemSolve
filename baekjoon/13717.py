species=int(input())
evoList=[]
name=[]
for i in range(species):
    name+=[input()]
    needCandy,totalCandy=map(int,input().split())
    cnt=0
    while True:
        if totalCandy>=needCandy:
            totalCandy=totalCandy-needCandy+2
            cnt+=1
        elif totalCandy<needCandy:
            break
    evoList+=[cnt]
print(sum(evoList))
print(name[evoList.index(max(evoList))])