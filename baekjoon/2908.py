num1,num2=map(int,input().split())
renum1 = int(str(num1%10)+str(num1//10%10)+str(num1//100))
renum2 = int(str(num2%10)+str(num2//10%10)+str(num2//100))
if renum1>renum2:
    print(renum1)
else :
    print(renum2)
"""
if num1%10==num2%10:
    if num1//10%10==num2//10%10:
        if ((num1//100)>=(num2//100)) :
            print(num1)
        else:
            print(num2)
    elif num1//10%10>=num2//10%10:
        print(num1)
    else:
        print(num2)
elif num1%10>=num2%10 :
    print(num1)
else:
    print(num2)"""