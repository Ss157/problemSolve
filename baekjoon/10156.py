K,N,M=map(int,input().split())
if M<K*N:
    print(-(M-K*N))
else:
    print(0)