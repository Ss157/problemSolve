#include <stdio.h>

int main(void){
    int BoxNum, PutNumInBox;
    scanf("%d", &BoxNum);
    scanf("%d", &PutNumInBox);
    int arrNum[BoxNum];
    for(int i = 0; i < BoxNum; i++){
        arrNum[i] = 0;
    }
    int StartBox = 0;
    int EndBox = 0;
    int Number = 0;
    for(int i = 0; i < PutNumInBox; i++){
        scanf("%d", &StartBox);
        scanf("%d", &EndBox);
        scanf("%d", &Number);
        for(int i = StartBox - 1; i < EndBox; i++){
            arrNum[i] = Number;
        }
    }
    for(int i = 0; i < BoxNum; i++){
        printf("%d ",arrNum[i]);
    }
}