#include <stdio.h>

int main(void){
    int input = 0;
    scanf("%d", &input);

    for(int i = 2; i <= input; i++){
        if(input % i == 0){
            printf("%d\n", i);
            input /= i;
            i--;
        }
    }
}