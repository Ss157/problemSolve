N=int(input())
for i in range(N-1):
    print(" "*i,end='')
    print("*"*((N-i)*2-1))
for i in range(1,N+1,1):
    print(" "*(N-i),end='')
    print("*"*(i*2-1))