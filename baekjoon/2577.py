num1=int(input())
num2=int(input())
num3=int(input())
num=str(num1*num2*num3)
for k in range(0,10):
    globals()['n_{}'.format(k)]=0
for i in num:
    for j in range(0,10):
        if str(j)==i:
            globals()['n_{}'.format(j)]+=1
            break
for k in range(0,10):
    print(globals()['n_{}'.format(k)])