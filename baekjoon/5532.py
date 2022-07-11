L=int(input())
totalKor=int(input())  #A국어
totalMath=int(input()) #B수학
dayKor=int(input())    #C국어
dayMath=int(input())   #D수학
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