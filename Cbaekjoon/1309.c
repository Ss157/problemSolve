#include <stdio.h>
int N, dp[100001];
int main(void){
    scanf("%d", &N);
    dp[0] = 1;
    dp[1] = 3;
    for (int i = 2; i <= N; i++)
    {
        dp[i] = dp[i - 1] * 2 + dp[i - 2];
        dp[i] %= 9901;
    }
    printf("%d", dp[N] % 9901);
}