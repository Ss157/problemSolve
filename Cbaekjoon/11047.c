#include <stdio.h>

int main(void){
    int N, K, arr[10], cnt = 0;
    scanf("%d %d", &N, &K);
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    while(K != 0){
        for(int i = N - 1; i >= 0; i--){
            if(K >= arr[i]){
                cnt++;
                K -= arr[i];
                break;
            }
        }
    }
    printf("%d", cnt);
}