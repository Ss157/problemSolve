#include <stdio.h>
int N, M, arr[100001][2], start, end;
int main(void){
    scanf("%d %d", &N, &M);
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &arr[i][0]);
        arr[i][1] = arr[i][0] + arr[i - 1][1];
    }

    for (int i = 0; i < M; i++)
    {
        scanf("%d %d", &start, &end);
        printf("%d\n", arr[end][1] - arr[start - 1][1]);
    }
}