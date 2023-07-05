#include <stdio.h>

int main(void){
    int th_honeycomb = 0;
    scanf("%d", &th_honeycomb);
    th_honeycomb--;
    int cnt = 1;
    while (1){
        if(th_honeycomb <= 0) break;
        for(int i = 0; i < cnt; i++){
            th_honeycomb -= 6;
        }
        cnt++;
    }
    printf("%d", cnt);
}