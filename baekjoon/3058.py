TestCase=int(input())
for i in range(TestCase):
    sum=0
    minEven=100
    numList=list(map(int,input().split()))
    for j in numList:
        if j%2==0:
            sum+=j
            if j<minEven:
                minEven=j
    print(sum)
    print(minEven)