A, B, C= map(int, input().split())
if A==B==C:
    print(10000+A*1000)
elif A==B or B==C or A==C:
    if A==B:
        print(1000+A*100)
    else :
        print(1000+C*100)
else:
    if A>B>C or A>C>B:
        print(A*100)
    elif B>A>C or B>C>A:
        print(B*100)
    else :
        print(C*100)