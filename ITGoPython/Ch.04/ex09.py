#블럭(block)
#자바나 c에서는 tap을 써야하지 않음, {}를 쓰기 때문
#파이썬은 써야만 함
#타 언어에서 쓰면 좋음
score=95
if score>=95:
    print("합격")
    print("장학금!")


#입력
#구입금액 입력받기
#과정
#구입금액이 5만원이 넘으면 5% 할인을 받는다.

#결과
#지불해야 할 금액 출력하기

purchasePrice=int(input())

if purchasePrice>=50000:
    finalPrice=purchasePrice*0.95
else:
    finalPrice=purchasePrice
print("결제하실 금액은 ",int(finalPrice//10)*10,"원입니다.")
print("감사합니다, 고객님.")