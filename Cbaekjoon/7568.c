#include <stdio.h>

typedef struct{
    int x;
    int y;
    int cnt;
}person;

int main(void){
    int N;
    person arr[50] = {0};
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(arr[i].x < arr[j].x && arr[i].y < arr[j].y){
                arr[i].cnt++;
            }
        }
    }

    for(int i = 0; i < N; i++){
        printf("%d ", ++arr[i].cnt);
    }
}