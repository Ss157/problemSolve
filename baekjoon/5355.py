T=int(input())
for i in range(T):
    statement=list(map(str,input().split()))
    num=float(statement[0])
    for j in range(1,len(statement)):
        if statement[j]=="@":
            num*=3
        elif statement[j]=="%":
            num+=5
        elif statement[j]=="#":
            num-=7
    print("%.2f"%num)