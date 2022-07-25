x,y,w,h=map(int,input().split())
numList=[x,y,w-x,h-y]
print(min(numList))