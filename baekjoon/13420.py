N=int(input())
for i in range(N):
    statements=list(map(str,input().split()))
    op=statements[1]
    if op=="+":
        result=int(statements[0])+int(statements[2])
    elif op=="-":
        result=int(statements[0])-int(statements[2])
    elif op=="*":
        result=int(statements[0])*int(statements[2])
    elif op=="/":
        result=int(statements[0])/int(statements[2])
    if result==int(statements[4]):
        print("correct")
    else:
        print("wrong answer")