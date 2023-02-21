#전역변수(global variable) : 함수 외부에 정의된 변수임.
#파이썬에서는 전역변수를 형태가 타 언어에 비해 접근방식이 융통성이 없음.
# 그러나 좋은 프로그래밍 습관을 장려한다는 장점이 있음.
"""
def test():
    print(text)

text="행복"
test()
"""

def test():
    text="행복"       #지역변수
    print(text)

text="운"          #전역변수
test()
print(text)