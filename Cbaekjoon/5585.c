#include <stdio.h>

int main(void){
    int cost;
    int cnt = 0;
    int temp = 0;
    scanf("%d", &cost);

    cost = 1000 - cost;
    if(cost >= 500){
        cost -= 500;
        cnt++;
    }

    temp = cost / 100;
    cost -= temp * 100;
    cnt += temp;

    temp = cost / 50;
    cost -= temp * 50;
    cnt += temp;

    temp = cost / 10;
    cost -= temp * 10;
    cnt += temp;

    temp = cost / 5;
    cost -= temp * 5;
    cnt += temp;

    cnt += cost;
    printf("%d\n", cnt);
}