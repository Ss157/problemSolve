TestCase=int(input())
for i in range(TestCase):
    secret_num=input()
    if 6<=len(secret_num)<=9:
        print("yes")
    else:
        print("no")