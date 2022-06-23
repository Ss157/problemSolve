"""for i in range(1000):
    A,B=map(int, input().split())
    if A==0 and B==0:
        break
    print(A+B)"""

import sys
rinput = sys.stdin.readline

while True:
    A, B = map(int, rinput().split())
    if A==0 and B==0:
        break
    print(A+B)