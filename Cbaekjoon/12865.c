#include <stdio.h>
int dp[100001];
typedef struct{
    int W;
    int V;
}object;

int main(void){
    object objects[100] = {0};
    int N, K;
    scanf("%d %d", &N, &K);

    for(int i = 0; i < N; i++){
        scanf("%d %d", &objects[i].W, &objects[i].V);
    }
    
    for(int i = 0; i < N; i++){
        for(int j = K; j > 0; j--){
            if(j >= objects[i].W)
            {
                if (dp[j] < dp[j - objects[i].W] + objects[i].V)
                {
                    dp[j] = dp[j - objects[i].W] + objects[i].V;
                }
            }
        }
    }

    printf("%d", dp[K]);
}