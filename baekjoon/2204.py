while True:
    strList=[]
    T=int(input())
    if T==0:
        break
    for i in range(T):
        strList+=[input().upper()]
        print(strList)