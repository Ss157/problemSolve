#include <stdio.h>

int main(void){
    int N, index = 0;
    scanf("%d", &N);
    while(N != 0){
        if(N % 2 == 1){
            printf("%d ", index);
            N -= 1;
            N /= 2;
        }
        else{
            N /= 2;
        }
        index++;
    }
}