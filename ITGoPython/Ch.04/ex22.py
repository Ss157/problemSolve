#사용자로부터 달을 입력받고
#그 달의 일수를 구하는 프로그램을 작성하기
month=int(input("달을 입력하세요. : "))

if month<=7:
    if month==2:
        days=28
    elif month%2==1:
        days=31
    else:
        days=30
else:
    if month%2==1:
        days=30
    else:
        days=31

print("%d월의 일수는 %d이다."%(month,days))