name_list=[]
cnt=""
for i in range(1,6):
    name=input()
    if "FBI" in name:
        cnt+=str(i)+" "
if not cnt=="":
    print(cnt)
else:
    print("HE GOT AWAY!")