#include <stdio.h>

int main(void){
    int t1, t2, e1, e2, f1, f2;
    scanf("%d %d %d %d %d %d", &t1, &e1, &f1, &t2, &e2, &f2);
    int cnt1 = t1 * 3 + e1 * 20 + f1 * 120;
    int cnt2 = t2 * 3 + e2 * 20 + f2 * 120;
    if(cnt1 > cnt2){
        printf("Max");
    }
    else if(cnt1 == cnt2){
        printf("Draw");
    }
    else if(cnt1 < cnt2){
        printf("Mel");
    }
}