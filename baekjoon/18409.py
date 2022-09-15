N=int(input())
S=input()
cnt=0
for _ in range(N):
    if S[_] in "aiueo":
        cnt+=1
print(cnt)