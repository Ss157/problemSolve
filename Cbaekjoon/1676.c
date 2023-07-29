#include <stdio.h>

int main(void){
    int input;
    scanf("%d", &input);
    int num5 = input / 5;
    int num25 = input / 25;
    int num125 = input / 125;
    
    printf("%d", num5 + num25 + num125);
}