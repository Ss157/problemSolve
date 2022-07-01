numCount, num = map(int, input().split())
numArray = list(map(int,input().split()))
for i in range(numCount):
    if num>numArray[i]:
        print(numArray[i], end=' ')