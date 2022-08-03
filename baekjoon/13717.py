species=int(input())
evolNumList=[]
name=[]
for i in range(species):
    name+=[input()]
    needCandy,totalCandy=map(int,input().split())
    cnt=0
    while True:
        if totalCandy-needCandy<0:
            break
        elif totalCandy-needCandy>=0:
            totalCandy=totalCandy-needCandy+2
            cnt+=1
    evolNumList+=[cnt]
print(sum(evolNumList))
print(name[evolNumList.index(max(evolNumList))])