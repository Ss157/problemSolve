statements="       안녕!"
#왼쪽 공백만 제거하는 함수
print(statements.lstrip())

statements="  안녕!           "
#오른쪽 공백만 제거하는 함수
print(statements.rstrip())

statements="     안녕!           "
#양쪽 공백만 제거하는 함수
print(statements.strip())

#문자열 나누기
statements="나는 열심히 파이썬 공부를 합니다."
print(statements.split())