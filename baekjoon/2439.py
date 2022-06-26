N=int(input())
for i in range(N):
    for j in range(4,i,-1):
        print(" ", end="")
    for j in range(i+1):
        print("*", end="")
    print()