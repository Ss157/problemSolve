num=list(map(str,input().split()))
sum=0
for i in range(5):
    sum+=(int(num[i]))**2
    divi=sum%10
print(divi)