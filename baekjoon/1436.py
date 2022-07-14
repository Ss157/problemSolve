N=input()
str1="666"
i=666
n=[]
while True:
    if len(n)==N:
        break
    if str1 in str(i):
        n.append(i)
    if 1<=i//len(str(i))<=5:
        i+=1000
    else:
        i+=1
print(n[N-1])