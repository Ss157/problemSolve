T=int(input())
for i in range(T):
    num=input()
    if len(num)==1:
        div=10
    elif len(num)==2:
        div=100
    else:
        div=1000

    if (int(num)**2%div)==int(num):
        print("YES")
    else:
        print("NO")