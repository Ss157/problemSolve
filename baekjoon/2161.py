N=input() #-->1~N카드
while True:
    if len(N)==1:
        print(N)
        break
    else :
        N[len(N)]=N[0]
        print(N)
        N[0]=[]
        print(N)