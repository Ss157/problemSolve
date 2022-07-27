n=int(input())
for i in range(n):
    hero_name=input()
    cnt_b=0
    cnt_g=0
    for j in range(len(hero_name)):
        if hero_name[j] in "Bb":
            cnt_b+=1
        elif hero_name[j] in "Gg":
            cnt_g+=1
    if cnt_b==cnt_g:
        print("%s is NEUTRAL"%hero_name)
    elif cnt_b>cnt_g:
        print("%s is A BADDY"%hero_name)
    else:
        print("%s is GOOD"%hero_name)