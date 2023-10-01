#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    long long cnt = 2;
    for(int i = 0; i < (n - 1) / 2; i++){
        cnt *= 2;
        cnt %= 16769023;
    }
    printf("%lld", cnt);
}