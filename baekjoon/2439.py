N=int(input())
for i in range(N):
    for j in range(4,i,-1):
        print(" ", end="")
    for j in range(i+1):
        print("*", end="")
    print()

    """공백 4 3 2 1 0
        별  1 2 3 4 5"""