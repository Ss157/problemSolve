#더블루프를 이용하기
#----*
#---***
#--*****
#-*******
#*********

for i in range(5):
    for k in range(4,i,-1):
        print("-", end='')
    for j in range(1,(i+1)*4-1,2):
        print("*", end='')
    print()
    
for i in range(1,11,2):
    print("{:^10}".format("*"*i))
    