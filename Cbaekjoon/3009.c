#include <stdio.h>

int main(void){
    int x1 = 0;
    int x2 = 0;
    int x3 = 0;
    int y1 = 0;
    int y2 = 0;
    int y3 = 0;
    scanf("%d", &x1);
    scanf("%d", &y1);

    scanf("%d", &x2);
    scanf("%d", &y2);

    scanf("%d", &x3);
    scanf("%d", &y3);
    
    if(x1 == x2){
        printf("%d ", x3);
    }
    else if(x1 == x3){
        printf("%d ", x2);
    }
    else{
        printf("%d ", x1);
    }

    if(y1 == y2){
        printf("%d ", y3);
    }
    else if(y1 == y3){
        printf("%d ", y2);
    }
    else{
        printf("%d ", y1);
    }
}