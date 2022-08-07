TestCase=int(input())
cnt=0
for i in range(TestCase):
    school,apple=map(int,input().split())
    cnt+=apple%school
print(cnt)