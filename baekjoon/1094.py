X=int(input())
leng=64
cnt=0
while True:
    cnt+=1
    if X==leng:
        break
    if X<leng:
        leng=leng/2
print(cnt)