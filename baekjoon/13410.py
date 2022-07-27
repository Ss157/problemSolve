N,K=map(int,input().split())
list9_9=[]
for i in range(K):
    if len(str((N*i)))==2:
        num=N*i%10*10+N*i//10
    else:
        num=N*i
    list9_9+=[num]
print(max(list9_9))