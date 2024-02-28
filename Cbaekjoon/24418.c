#include <stdio.h>
int n, m[16][16], cnt1, cnt2, dp[16][16];

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int matrix_path_rec(int m[][16], int i, int j) {
    if (i == 0 || j == 0)
    {
        cnt1++;
        return 0;
    }
    else
        return (m[i][j] + (max(matrix_path_rec(m, i-1, j), matrix_path_rec(m, i, j-1))));
}

int matrix_path(int m[][16], int n)
{
    return matrix_path_rec(m, n, n);
}

int matrix_path_2(int m[][16], int n) {
    for (int i = 0; i < n + 1; i++)
    {
        dp[i][0] = 0;
    }
    for (int j = 1; j < n + 1; j++)
    {
        dp[0][j] = 0;
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            dp[i][j] = m[i][j] + max(dp[i - 1][j], dp[i][j - 1]);
            cnt2++;
        }
        
    }
    return dp[n][n];
}

int main(void){
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    matrix_path(m, n);
    matrix_path_2(m, n);
    printf("%d %d", cnt1, cnt2);
}