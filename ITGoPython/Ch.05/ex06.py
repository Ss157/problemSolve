#피보나치 수열
n1=1
n2=1
n3=1

num=int(input("피보나치 수열을 어디까지 만들까요? : "))
for n in range(1,num):
    if n<3:
        n3=1
    else:
        n3=n1+n2
        n1=n2
        n2=n3
    if n3<num:
        print(n3, end=' ')
    else:
        break
