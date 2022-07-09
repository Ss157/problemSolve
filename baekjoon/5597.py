stu=[]
for i in range(1,31):
    stu+=[i]
for i in range(28):
    stu.remove(int(input()))
print(min(stu))
print(max(stu))