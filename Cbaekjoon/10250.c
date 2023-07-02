#include <stdio.h>

int main(void){
    int TestCase = 0;
    scanf("%d", &TestCase);

    while (TestCase--){
        int floor = 0;
        int room = 0;
        int guests = 0;
        int cnt = 1;
        scanf("%d", &floor);
        scanf("%d", &room);
        scanf("%d", &guests);
        while(guests > floor){
            guests -= floor;
            cnt++;
        }
        if(cnt < 10) guests *= 10;
        printf("%d%d\n", guests, cnt);
    }
}