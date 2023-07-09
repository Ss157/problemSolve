#include <stdio.h>

int main(void){
    int N, K;
    scanf("%d %d", &N, &K);
    if(K > N / 2){
        K = N - K;
    }
    int numerator = 1;
    int denominator = 1;
    int repeat = K;
    while (repeat--){
        numerator *= N;
        N--;
    }
    repeat = K;
    while (repeat--){
        denominator *= K;
        K--;
    }
    
    printf("%d", numerator / denominator);
}