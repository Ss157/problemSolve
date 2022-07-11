#더블루프를 이용하기
#----*
#---***
#--*****
#-*******
#*********
"""
for i in range(5):
    for k in range(4,i,-1):
        print(" ", end='')
    for j in range(1,(i+1)*4-1,2):
        print("*", end='')
    print()
    
for i in range(1,11,2):
    print("{:^10}".format("*"*i))

"""

#----*
#---***
#--*****
#-*******
#*********
#*********
#-*******
#--*****
#---***
#----*
#1 3 5 7 9
for i in range(1,10,2):
    print("{:^10}".format("*"*i))
for j in range(9,0,2):
    print("{:^10}".format("*"*j))

#반복문 실습-9 21분 41초