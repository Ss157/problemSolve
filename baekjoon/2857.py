name_list=[]
cnt=0
for i in range(5):
    name=input()
    if "FBI" in name:
        cnt+=1
if cnt>=1:
    print(cnt)
else:
    print("HE GOT AWAY!")