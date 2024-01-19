#include <stdio.h>
int N, min, arr[1000001] = {0, 0, 1, 1, 2};
int main(void){
    scanf("%d", &N);
    for(int i = 5; i <= N; i++){
        min = 10000;
        if(i % 3 == 0){
            if(min > arr[i / 3]){
                min = arr[i / 3];
            }
        }
        if(i % 2 == 0){
            if(min > arr[i / 2]){
                min = arr[i / 2];
            }
        }
        if(min > arr[i - 1]){
            min = arr[i - 1];
        }
        arr[i] = min + 1;
    }
    printf("%d", arr[N]);
}