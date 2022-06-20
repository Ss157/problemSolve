A, B =map(int, input().split())
C = int(input())

if B+C<=60:
    print(A, B+C)
elif B+C>60 and A+(B+C)/60<=24:
    print(int(A+(B+C)/60), (B+C)%60)
else :
    print(int(24-(A+(B+C)/60)), (B+C)%60)