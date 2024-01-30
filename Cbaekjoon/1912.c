#include <stdio.h>

int main(void){
    int n, arr[100000], dp[100000];
    long long max = -1000;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    dp[0] = arr[0];
    max = dp[0];
    for (int i = 1; i < n; i++)
    {
        if(dp[i - 1] >= 0)
        {
            dp[i] = dp[i - 1] + arr[i];
        }
        else
        {
            dp[i] = arr[i];
        }
        if(max < dp[i])
        {
            max = dp[i];
        }
    }
    printf("%lld", max);
}