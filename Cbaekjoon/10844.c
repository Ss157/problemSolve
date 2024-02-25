#include<stdio.h>
int dp[10][2], N, i, ans = 0;
int main() {
	scanf("%d", &N);
 
	for (i = 1; i < 10; i++)
		dp[i][0] = 1;
 
	while (N > 1) {
		dp[0][1] = dp[1][0];
		for (i = 1; i < 9; i++) {
			dp[i][1] = (dp[i - 1][0] + dp[i + 1][0]) % 1000000000;
		}
		dp[9][1] = dp[8][0];
 
		for (i = 0; i < 10; i++)
			dp[i][0] = dp[i][1];
		N--;
	}
 
	for (i = 0; i < 10; i++)
		ans = (ans + dp[i][0]) % 1000000000;
	
	printf("%d", ans);
	return 0;
}
