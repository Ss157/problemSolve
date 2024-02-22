#include <stdio.h>
int n, max, arr[1001], dp[1001];
int main(void){
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        dp[i] = arr[i];
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
            {
                if (dp[i] < dp[j] + arr[i])
                {
                    dp[i] = dp[j] + arr[i];
                }
            }
        }
        if (max < dp[i])
        {
            max = dp[i];
        }
    }
    printf("%d", max);
}