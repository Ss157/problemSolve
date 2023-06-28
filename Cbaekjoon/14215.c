#include <stdio.h>

int main(void){
    int triangle_side[3];
    for(int i = 0; i < 3; i++){
        scanf("%d", &triangle_side[i]);
    }
    int temp = 0;
    int max = triangle_side[0];
    if(max < triangle_side[1]){
        max = triangle_side[1];
        temp = triangle_side[0];
        triangle_side[0] = triangle_side[1];
        triangle_side[1] = temp;
    }
    if(max < triangle_side[2]){
        max = triangle_side[2];
        temp = triangle_side[0];
        triangle_side[0] = triangle_side[2];
        triangle_side[2] = temp;
    }
    if(triangle_side[0] >= triangle_side[1] + triangle_side[2]){
        triangle_side[0] = triangle_side[1] + triangle_side[2] - 1;
    }
    int add = 0;
    for(int i = 0; i < 3; i++){
        add += triangle_side[i];
    }
    printf("%d", add);
}