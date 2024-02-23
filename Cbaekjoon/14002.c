#include <stdio.h>
int n, max, idx, arr[1001], dp[1001], visited[1001], ans[1001];

int main(void){
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        dp[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
            {
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    visited[i] = j;
                }
            }
        }
        if (max < dp[i])
        {
            idx = i;
            max = dp[i];
        }
    }

    printf("%d\n", max);

    for (int i = max; i > 0; i--)
    {
        ans[i] = arr[idx];
        idx = visited[idx];
    }
    
    for (int i = 1; i < max + 1; i++)
    {
        printf("%d ", ans[i]);
    }
}