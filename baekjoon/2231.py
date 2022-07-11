N=int(input())
for i in range(N):
    if (i+(i//100)+(i//10%10)+(i%10))==N:
        print(i)
        break
    elif N==1:
        print(0)
        break