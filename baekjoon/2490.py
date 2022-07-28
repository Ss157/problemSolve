for j in range(3):
    numList=list(map(int,input().split()))
    cnt_0=0
    cnt_1=0
    for i in range(4):
        if i==0:
            cnt_0+=1
        else:
            cnt_1+=1
    if cnt_0==1 and cnt_1==3:
        print("A")
    elif cnt_0==2 and cnt_1==2:
        print("B")
    elif cnt_0==3 and cnt_1==1:
        print("C")
    elif cnt_0==4 and cnt_1==0:
        print("D")
    elif cnt_0==0 and cnt_1==4:
        print("E")