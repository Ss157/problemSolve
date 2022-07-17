N,M=map(int,input().split())
not_see=[]
not_hear=[]
not_see_hear=[]
for i in range(N):
    not_see.append(input())
    print(not_see)
for i in range(M):
    not_hear.append(input())
    print(not_hear)
    if not_hear[i] in not_see:
        not_see_hear.append(not_hear[i])
print(len(not_see_hear))
not_see_hear.sort()
for i in range(len(not_see_hear)):
    print(not_see_hear[i])