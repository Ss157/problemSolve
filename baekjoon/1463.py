from sys import stdin
N=int(stdin.readline())
cnt=0
while True:
    if N==1:
        break
    elif N%3==0:
        N=N/3
    else:
        if (N-1)%3==0:
            N-=1
        else:
            N=N/2
    cnt+=1
print(cnt)