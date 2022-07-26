while True:
    statements=input()
    cnt=0
    if statements=="#":
        break
    for i in range(len(statements)):
        if statements[i] in "aeiouAEIOU":
            cnt+=1
    print(cnt)