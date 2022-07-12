D,H,W=map(int,input().split())
width=(D**2/((H/W)**2+1))**(1/2)
height=(H/W)*width
print("%d %d"%(height,width))