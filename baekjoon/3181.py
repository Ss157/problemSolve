nmList=['i', 'pa', 'te', 'ni', 'niti', 'a', 'ali', 'nego', 'no', 'ili']
str_1=list(map(str,input().split()))
for i in range(len(str_1)):
    if i==0:
        print(str_1[0][0].upper(),end='')
    elif not str_1[i] in nmList:
        print(str_1[i][0].upper(),end='')