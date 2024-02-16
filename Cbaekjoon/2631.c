#include <stdio.h>
int N, max, arr[200], dp[200];
int main(void){
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < N; i++)
    {
        dp[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
            {
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                }
            }
        }
        if (max < dp[i])
        {
            max = dp[i];
        }
    }
    
    printf("%d", N - max);
}