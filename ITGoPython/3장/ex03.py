itemPrice = int(input("물건값을 입력하세요. : "))
bills_1000 = int(input("1000원 지폐 개수를 입력하세요. : "))
coins_500 = int(input("500원 동전 개수를 입력하세요. : "))
coins_100 = int(input("100원 동전 개수를 입력하세요. : "))

nodMoney=(bills_1000*1000+coins_500*500+coins_100*100)-itemPrice
nodcoins500=nodMoney//500
nodMoney=nodMoney%500
nodcoins100=nodMoney//100
print("500원짜리 : ",nodcoins500,"100원짜리 : ",nodcoins100)