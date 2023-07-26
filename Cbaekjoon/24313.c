#include <stdio.h>

int main(void){
    int a1, a0, c, n0;
    scanf("%d %d %d %d", &a1, &a0, &c, &n0);
    printf("%d %d %d %d\n", a1, a0, c, n0);
    printf("%d %d\n", a1 * n0 + a0, c * n0);
    if(a1 * n0 + a0 <= c * n0){
        printf("1");
    }
    else{
        printf("0");
    }
}