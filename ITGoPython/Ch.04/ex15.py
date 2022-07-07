#if-elif-else
score=int(input("성적 : "))
if score>=90:
    grade='A'
elif score>=80:
    grade='B'
elif score>=70:
    grade='C'
elif score>=70:
    grade='D'
else:
    grade='F'
print("학점은 %s입니다."%grade)