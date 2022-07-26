statements=input()
sum=0
for i in statements:
    if i.isupper():
        sum+=ord(i)-38
    elif i.islower():
        sum+=ord(i)-96
j=0
if sum==1:
    print("It is a prime word.")
else:
    for j in range(2,sum):
        if sum%j==0:
            print("It is not a prime word.")
            break
    if sum==j+1:
        print("It is a prime word.")