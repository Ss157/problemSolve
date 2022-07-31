N=int(input())
for i in range(N):
    quarter=0;dime=0;nickel=0;penny=0
    cent=int(input())
    quarter=cent//25
    cent-=quarter*25
    dime=cent//10
    cent-=dime*10
    nickel=cent//5
    cent-=nickel*5
    penny=cent
    print("%d %d %d %d"%(quarter,dime,nickel,penny))