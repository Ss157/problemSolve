#include <stdio.h>

int main(void){
    long long T, N, arr[100] = {1, 1, 1, 2, 2};
    scanf("%lld", &T);
    while(T--){
        scanf("%lld", &N);
        for(int i = 5; i < N; i++){
            arr[i] = arr[i - 1] + arr[i - 5];
        }
        printf("%lld\n", arr[N - 1]);
    }
}