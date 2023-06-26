#include <stdio.h>

int main(void){
    int N = 0, M = 0;
    scanf("%d", &N);
    scanf("%d", &M);
    int arrNum[N];
    for(int i = 0; i < N; i++){
        arrNum[i] = i + 1;
    }
    int switch1 = 0;
    int switch2 = 0;
    int temp = 0;
    for(int i = 0; i < M; i++){
        scanf("%d", &switch1);
        scanf("%d", &switch2);
        switch1 -= 1;
        switch2 -= 1;
        temp = arrNum[switch1];
        arrNum[switch1] = arrNum[switch2];
        arrNum[switch2] = temp;
    }

    for(int i = 0; i < N; i++){
        printf("%d ", arrNum[i]);
    }
}