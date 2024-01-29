#include <stdio.h>
int main(void){
    int n, max = 0, arr[10001], dp[10001];
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    dp[0] = 0;
    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];
    for (int i = 3; i < n + 1; i++)
    {
        max = 0;
        if(max < arr[i] + dp[i - 2])
        {
            max = arr[i] + dp[i - 2];
        }
        if(max < arr[i] + arr[i - 1] + dp[i - 3])
        {
            max = arr[i] + arr[i - 1] + dp[i - 3];
        }
        if(max < dp[i - 1])
        {
            max = dp[i - 1];
        }
        dp[i] = max;
    }
    
    printf("%d", dp[n]);
}