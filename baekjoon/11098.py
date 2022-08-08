for i in range(int(input())):
    for j in range(int(input())):
        money,name=list(map(str,input().split()))
    print(name[money.index(max(money))])