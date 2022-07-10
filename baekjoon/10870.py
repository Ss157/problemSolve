n0=0
n1=1
n2=1
num=int(input())
cnt=1
while True:
    if num==cnt:
        print(n2)
        break
    elif num==0:
        print(n0)
        break
    n2=n0+n1
    n0=n1
    n1=n2
    cnt+=1