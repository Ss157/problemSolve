cnt=0
while True:
    length=input()
    cnt+=1
    if length=="0":
        break
    r,w,l=length.split()
    diagonal=(int(w)**2+int(l)**2)**(1/2)
    if int(r)*2>=diagonal:
        print("Pizza %d fits on the table."%cnt)
    else:
        print("Pizza %d does not fit on the table."%cnt)