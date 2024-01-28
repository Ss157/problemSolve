#include <stdio.h>
int N;
int arr[1000];
int main(void){
    scanf("%d", &N);
    arr[0] = 1;
    arr[1] = 3;
    for (int i = 2; i < N; i++)
    {
        arr[i] = (arr[i - 1] + arr[i - 2] * 2) % 10007;
    }
    printf("%d", arr[N - 1] % 10007);
}