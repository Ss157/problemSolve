#include <stdio.h>

int main(void){
    int BoxNum, PutNumInBox;
    scanf("%d", &BoxNum);
    scanf("%d", &PutNumInBox);
    int arrNum[BoxNum];
    for(int i = 0; i < BoxNum; i++){
        arrNum[i] = i + 1;
    }
    int StartBox = 0;
    int EndBox = 0;
    int temp = 0;
    int cnt = 0;
    for(int i = 0; i < PutNumInBox; i++){
        scanf("%d", &StartBox);
        scanf("%d", &EndBox);
        StartBox -= 1;
        EndBox -= 1;
        cnt = EndBox - StartBox + 1;
        for(int j = 0; j < cnt; j++){
            if(StartBox >= EndBox) break;
            temp = arrNum[StartBox];
            arrNum[StartBox] = arrNum[EndBox];
            arrNum[EndBox] = temp;
            StartBox += 1;
            EndBox -= 1;
        }
    }
    for(int i = 0; i < BoxNum; i++){
        printf("%d ",arrNum[i]);
    }
}