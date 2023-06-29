#include <stdio.h>

int main(void){
    int input = 0;
    scanf("%d", &input);

    int arrX[input];
    int arrY[input];

    int minX = 10000, maxX = -10000, minY = 10000, maxY = -10000;
    for(int i = 0; i < input; i++){
        scanf("%d", &arrX[i]);
        if(minX > arrX[i]){
            minX = arrX[i];
        }
        if(maxX < arrX[i]){
            maxX = arrX[i];
        }
        scanf("%d", &arrY[i]);
        if(minY > arrY[i]){
            minY = arrY[i];
        }
        if(maxY < arrY[i]){
            maxY = arrY[i];
        }
    }
    printf("%d", (maxX - minX) * (maxY - minY));
}