#include <stdio.h>
int T, n, dp[10001][3] = {{1, 0, 0}, {1, 1, 0}, {1, 1, 1}};
int main(void){
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        for (int i = 3; i < n; i++)
        {
            dp[i][0] = dp[i - 1][0];
            dp[i][1] = dp[i - 2][0] + dp[i - 2][1];
            dp[i][2] = dp[i-3][0] + dp[i-3][1] + dp[i-3][2];
        }
        printf("%d\n", dp[n - 1][0] + dp[n - 1][1] + dp[n - 1][2]);
    }
}