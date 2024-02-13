#include <stdio.h>
int T, n, dp[100001][2];
int main(void){
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &dp[j][i]);
            }
        }

        if(n == 1)
        {
            if (dp[0][0] >= dp[0][1])
            {
                printf("%d\n", dp[0][0]);
            }
            else
            {
                printf("%d\n", dp[0][1]);
            }
            continue;
        }
        else if (n == 2)
        {
            if (dp[0][0] + dp[1][1] >= dp[0][1] + dp[1][0])
            {
                printf("%d\n", dp[0][0] + dp[1][1]);
            }
            else
            {
                printf("%d\n", dp[0][1] + dp[1][0]);
            }
            continue;
        }
        dp[1][1] = dp[0][0] + dp[1][1];
        dp[1][0] = dp[0][1] + dp[1][0];
        for (int i = 2; i < n; i++)
        {
            if (dp[i - 1][1] >= dp[i - 2][1])
            {
                dp[i][0] = dp[i][0] + dp[i - 1][1];
            }
            else
            {
                dp[i][0] = dp[i][0] + dp[i - 2][1];
            }
            
            if (dp[i - 1][0] >= dp[i - 2][0])
            {
                dp[i][1] = dp[i][1] + dp[i - 1][0];
            }
            else
            {
                dp[i][1] = dp[i][1] + dp[i - 2][0];
            }
        }
        if (dp[n - 1][0] >= dp[n - 1][1])
        {
            printf("%d\n", dp[n - 1][0]);
        }
        else
        {
            printf("%d\n", dp[n - 1][1]);
        }
    }
}