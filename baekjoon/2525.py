A, B =map(int, input().split())
C = int(input())
if B+C<60:
    print(A, B+C)
elif A+(B+C)//60<24:
    print(A+(B+C)//60, (B+C)%60)
else :
    print(abs(24-(A+(B+C)//60)), (B+C)%60)