n=int(input())
while True:
    num=int(input())
    if num==0:
        break
    elif num%n==0:
        print("%d is a multiple of %d."%(num,n))
    else:
        print("%d is NOT a multiple of %d."%(num,n))