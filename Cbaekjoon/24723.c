#include <stdio.h>

int main(void){
    int height;
    scanf("%d", &height);
    int CASE = 1;
    for(int i = 0; i < height; i++){
        CASE *= 2;
    }
    printf("%d", CASE);
}