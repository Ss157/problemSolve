#include <stdio.h>
int N, K, max, input[100000], output[100000];
int main(void){
    scanf("%d %d", &N, &K);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &input[i]);
        if(i < K)
        {
            max += input[i];
        }
    }
    output[0] = max;
    for (int i = 1; i <= N - K; i++)
    {
        output[i] = output[i - 1] + input[K + i - 1] - input[i - 1];
        if(max < output[i])
        {
            max = output[i];
        }
    }
    printf("%d", max);
}