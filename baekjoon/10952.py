import sys
rinput = sys.stdin.readline

while True:
    A, B = map(int, rinput().split())
    if A==0 and B==0:
        break
    print(A+B)