import sys
fruit,length=map(int,sys.stdin.readline().split())
height=list(map(int,sys.stdin.readline().split()))
height.sort()
for i in range(fruit):
    if length>=height[i]:
        length+=1
    else:
        break
print(length)