maxper=0
for i in range(4):
    outper,inper=map(int,input().split())
    if inper-outper>0:
        maxper+=inper-outper
print(maxper)