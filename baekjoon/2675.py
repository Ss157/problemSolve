T=int(input())
for i in range(2):
    R, str_1 =input().split()
    R=int(R)
    for j in str_1:
        print(str_1[j]*R,end='')