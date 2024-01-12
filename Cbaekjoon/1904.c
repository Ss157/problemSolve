#include <stdio.h>
int arr[1000000] = {1, 2};
int main(void){
    int N;
    scanf("%d", &N);
    for(int i = 2; i < N; i++){
        arr[i] = (arr[i - 1] + arr[i - 2]) % 15746;
    }

    printf("%d", arr[N - 1]);
}