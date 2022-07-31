from sys import stdin
N=int(stdin.readline())
cntList=[]
cntList+=[N]
while True:
    if N==1:
        break
    elif N%3==0:
        N/=3
        cntList+=[N]
    elif (N-1)%3==0:
        N-=1
        cntList+=[N]
    else:
        N/=2
        cntList+=[N]
print(len(cntList)-1)
answer=""
for i in cntList:
    answer+=str(int(i))+" "
print(answer)