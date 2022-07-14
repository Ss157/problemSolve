n=1
while True:
    if n>=30:
        break
    print(n,end=' ')
    if 1000<=n<=10000:
        n=n+n//1000+n//100%10+n//10%10+n%10
    elif 100<=n<=1000:
        n=n+n//100+n//10%10+n%10
    elif 10<=n<=100:
        n=n+n//10+n%10
    else :
        n+=2