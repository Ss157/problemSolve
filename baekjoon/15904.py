statements=input()
UCPC=""
for i in statements:
    if i in "UCP":
        UCPC+=i
if UCPC=="UCPC":
    print("I love UCPC")
else:
    print("I hate UCPC")