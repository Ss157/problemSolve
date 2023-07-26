#include <stdio.h>

int main(void){
    long long input;
    scanf("%lld", &input);

    printf("%lld\n3", (input - 2) * (input - 1) * input / 6);
}