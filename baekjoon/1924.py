month,day=map(int,input().split())
n=0
for i in range(1,month):
    if i==1 or i==3 or i==5 or i==7 or i==8 or i==10 or i==12:
        n+=31
    elif i==4 or i==6 or i==9 or i==11:
        n+=30
    else:
        n+=28
n+=day
if n%7==1:
    print("MON")
elif n%7==2:
    print("TUE")
elif n%7==3:
    print("WED")
elif n%7==4:
    print("THU")
elif n%7==5:
    print("FRI")
elif n%7==6:
    print("SAT")
else:
    print("SUN")