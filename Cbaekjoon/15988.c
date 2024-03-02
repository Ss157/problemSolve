#include <stdio.h>
int T, n;
long long dp[1000001] = {1, 2, 4};
int main(void){
    scanf("%d", &T);
    while ((T--))
    {
        scanf("%d", &n);
        for (int i = 3; i < n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
            dp[i] %= 1000000009;
        }
        printf("%lld\n", dp[n - 1]);
    }
}