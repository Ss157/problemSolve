N=int(input())
F=int(input())

for i in range(100):
    if 0<=i<=9:
        i="0"+str(i)
    if (N//100*100+int(i))%F==0:
        break
print(i)