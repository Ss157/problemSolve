#include <stdio.h>
int M, N, arr[1000000] = {0};
int main(void){
    scanf("%d %d", &M, &N);
    arr[1] = 1;
    for(long long i = 2; i <= N; i++){
        for(long long j = 2; i * j <= N; j++){
            arr[i * j] = 1;
        }
    }
    for(int i = M; i <= N; i++){
        if(arr[i] == 0){
            printf("%d\n", i);
        }
    }
}