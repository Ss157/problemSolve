def new_op(n1,n2):
    ans=(n1+n2)*(n1-n2)
    return ans
num1,num2=map(int,input().split())
print(new_op(num1,num2))