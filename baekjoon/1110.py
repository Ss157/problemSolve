N =int(input())
for i in range(4):
        if N<10:
            N1 = 0
            N2 = N
        else :
            N1 = N//10
            N2 = N%10
        N3 = N1 + N2
        N4 = N3+N2
print(N4)