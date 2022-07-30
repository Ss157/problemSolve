for j in range(3):
    numList=list(map(int,input().split()))
    cnt_0=0
    cnt_1=0
    for i in numList:
        if i==0:
            cnt_0+=1
        else:
            cnt_1+=1
    if cnt_0==1:
        print("A")
    elif cnt_0==2:
        print("B")
    elif cnt_0==3:
        print("C")
    elif cnt_0==4:
        print("D")
    else:
        print("E")