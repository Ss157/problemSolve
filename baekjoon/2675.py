T=int(input())
for i in range(T):
    R, str_1 =map(str,input().split())
    for j in range(len(str_1)):
        print(str_1[j]*int(R),end='')
    print()