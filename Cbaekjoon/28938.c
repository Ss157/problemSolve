#include <stdio.h>

int main(void){
    int N, temp, cnt = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &temp);
        cnt += temp;
    }
    if(cnt > 0){
        printf("Right");
    }
    else if(cnt == 0){
        printf("Stay");
    }
    else if(cnt < 0){
        printf("Left");
    }
}