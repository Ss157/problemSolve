import secrets


time = int(input("초를 입력하세요 :"))
sec = time%60
min = (time//60)%60
hour = time//3600
print(hour,"시",min,"분",sec,"초")