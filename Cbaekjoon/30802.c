#include <stdio.h>

int main(void){
    int N, T, P, arr[6], cnt = 0;
    scanf("%d", &N);
    for(int i = 0; i < 6; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &T, &P);

    for(int i = 0; i < 6; i++){
        if(arr[i] % T > 0){
            cnt++;
        }
        cnt += arr[i] / T;
    }
    printf("%d\n", cnt);
    printf("%d %d", N / P, N % P);
}