while True:
    n1,n2,n3=map(int,input().split())
    if n1==n2==n3==0:
        break
    elif n2-n1==n3-n2:
        print("AP %d"%(n3+(n3-n2)))
    else:
        print("GP %d"%(n3*(n2/n1)))