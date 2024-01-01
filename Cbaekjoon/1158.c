#include <stdio.h>

int main(void){
    int N, K, arr[5000] = {0}, cnt, j = -1;
    scanf("%d %d", &N, &K);
    for(int i = 0; i < N; i++){
        arr[i] = i + 1;
    }
    printf("<%d", arr[K - 1]);
    arr[K - 1] = 0;

    for(int i = 0; i < N - 1; i++){
        cnt = 0;
        while(cnt != K){
            j++;
            if(arr[(K + j) % N] != 0){
                cnt++;
            }
        }
        printf(", %d", arr[(K + j) % N]);
        arr[(K + j) % N] = 0;
    }
    printf(">");
}