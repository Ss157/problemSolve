#include <stdio.h>
int graph[50][50];
int T, M, N, K, x, y, cnt;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int dfs (int x, int y)
{
    if(x < 0 || y < 0 || x >= M || y >= N){
        return 0;
    }
    if (graph[x][y] == 1)
    {
        graph[x][y] = 0;
        for (int i = 0; i < 4; i++)
        {
            dfs(x + dx[i], y + dy[i]);
        }
        return 1;
    }
    return 0;
}
int main(void){
    scanf("%d", &T);
    while (T--)
    {
        cnt = 0;
        scanf("%d %d %d", &M, &N, &K);
        while (K--)
        {
            scanf("%d %d", &x, &y);
            graph[x][y] = 1;
        }

        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (dfs(i, j) == 1)
                {
                    cnt++;
                }
            }
        }
        printf("%d\n", cnt);
    }
}