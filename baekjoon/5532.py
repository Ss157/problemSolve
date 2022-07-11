L=int(input())
totalKor=int(input())  #A
totalMath=int(input()) #B
dayKor=int(input())    #C
dayMath=int(input())   #D
math=totalMath/dayMath
korean=totalKor/dayKor
if math!=totalMath//dayMath:
    math=(totalMath//dayMath)+1
if korean!=totalKor//dayKor:
    korean=(totalKor//dayKor)+1
if math>korean:
    print(L-math)
else:
    print(L-korean)