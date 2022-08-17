a=int(input())
b=int(input())
c=int(input())
if a==b==c==60:
    st="Equilateral"
elif (a==b or b==c or a==c) and a+b+c==180:
    st="Isosceles"
elif a!=b!=c and a+b+c==180:
    st="Scalene"
else:
    st="Error"
print(st)