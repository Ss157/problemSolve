num=int(input())
num1=(num//10000)**5
num2=(num//1000%10)**5
num3=(num//100%10)**5
num4=(num//10%10)**5
num5=(num%10)**5
print(num1+num2+num3+num4+num5)