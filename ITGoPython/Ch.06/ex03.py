#두 개의 정수를 입력받아 두 수 중에서 더 큰 수를
#찾아서 리턴하는 함수
def get_max(x,y):
    if x>y:
        maxi=x
    else :
        maxi=y
    return maxi
x,y=map(int,input("두 정수를 입력하세요. :").split())
print("둘 중 더 큰 수는",get_max(x,y),"이다.")

def get_min(x,y):
    if x>y:
        mini=y
    else :
        mini=x
    return mini
x,y=map(int,input("두 정수를 입력하세요. :").split())
print("둘 중 더 작은 수는",get_min(x,y),"이다.")