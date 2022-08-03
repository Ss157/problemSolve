TestCase=int(input())
for i in range(TestCase):
    statements=input().split()
    print("Case #%d:"%(i+1),*statements[::-1])