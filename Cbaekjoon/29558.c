#include <stdio.h>

int main(void){
    int N, D;
    scanf("%d %d", &N, &D);
    int temp = D;
    if(N % 2 == 1){
        printf("%d ", D);
        N--;
    }
    int i = 1;
    while(1){
        if(N <= 0){
            break;
        }
        printf("%d %d ", temp - i, temp + i);
        i++;
        N -= 2;
    }
}