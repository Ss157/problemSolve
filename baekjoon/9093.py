TestCase=int(input())
for i in range(TestCase):
    statements=input().split()
    for j in statements:
        print("".join(reversed(j)),end=' ')
    print()