from ast import Str


X,Y=map(str,input().split())
X=X[::-1]
Y=Y[::-1]

Z=int(X)+int(Y)
print(int(str(Z)[::-1]))