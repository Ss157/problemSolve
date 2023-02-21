#지역변수(local variable)와 전역변수(global variable)에 대한 실습
#지역변수:파이썬에서는 함수 안에 정의된 변수를 지역변수라고 함, 지역변수의 범위(scope)은 함수 내에서만 사용이 되고 함수가 호출이 되고 종료가 되면 지역변수는 소멸됨.
"""
def test():
    text="기쁨"    #지역변수 text
    print(text)
#test()를 호출한 후, "기쁨"이라는 문자열을 출력하면서 리턴값은 없다.
test()
"""

def test():
    text="기쁨"    #지역변수 text
    print(text)
#test()를 호출한 후, "기쁨"이라는 문자열을 출력하면서 리턴값은 없다.
test()
# 아래 출력함수에서 

print(text)    #오류

