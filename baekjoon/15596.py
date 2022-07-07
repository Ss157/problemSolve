def solve(a):
    for i in range(len(a)):
        global sum
        sum+=int(a[i])
    return sum
a=[1,4,5,15]
c=solve(a)