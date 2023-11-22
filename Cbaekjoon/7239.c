#include <stdio.h>

int main(void){
    int N, arr[1000] = {0};
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    int temp = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < (N - 1) - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int index = N / 2;
    for(int i = N / 2; i < N; i++){
        printf("%d ", arr[i]);
        if((i - N / 2) != N / 2){
            printf("%d ", arr[i - N / 2]);
        }
    }
}