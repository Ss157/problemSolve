A,B,C=map(int,input().split())
if A==B==C==1:
    print("1")
elif A==B==1 or B==C==1 or C==A==1:
    print("1")
else:
    print("2")