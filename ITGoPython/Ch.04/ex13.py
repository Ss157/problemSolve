#졸업요건 140학점 평점 2.0이상
#입력
#이수학점, 평점 입력받기
#처리 
#이수학점이 140이 넘는지, 평점이 2.0이 넘는지
#결과
#졸업가능 or 졸업불가능으로 출력하기

completedCredits=int(input("현재까지 이수학점을 입력하세요. : "))
grade=float(input("평균학점을 입력하세요. : "))
if completedCredits>=140 and grade>=2.0:
    print("졸업이 가능합니다.")
else :
    print("졸업이 불가능합니다.")