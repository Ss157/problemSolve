#include <stdio.h>

int main(void){
    int climbingH = 0;
    int fallingH = 0;
    int height = 0;
    scanf("%d %d %d", &climbingH, &fallingH, &height);

    int cnt = (height - fallingH - 1) / (climbingH - fallingH) + 1;
    printf("%d", cnt);
}