#include <stdio.h>
long long fi(int N){
    if(N == 1) return 1;
    if(N == 0) return 1;
    return N * fi(N - 1);
}

int main(void){
    int input;
    scanf("%d", &input);
    printf("%lld", fi(input));
}