#include <stdio.h>
int N, M, cnt, graph[101][101];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int bfs(int x, int y){
    int front, rear, pop[2];
    front = rear = 0;
    int queue[10001][2];
    queue[rear][0] = x;
    queue[rear++][1] = y;
    
    while (front < rear)
    {
        pop[0] = queue[front][0];
        pop[1] = queue[front++][1];

        for (int i = 0; i < 4; i++)
        {
            if(pop[0] + dx[i] < 0 || pop[1] + dy[i] < 0 || pop[0] + dx[i] >= N || pop[1] + dy[i] >= M)
            {
                continue;
            }

            if(graph[pop[0] + dx[i]][pop[1] + dy[i]] != 1)
            {
                continue;
            }
            graph[pop[0] + dx[i]][pop[1] + dy[i]] = graph[pop[0]][pop[1]] + 1;
            
            queue[rear][0] = pop[0] + dx[i];
            queue[rear++][1] = pop[1] + dy[i];
            // printf("%d %d\n", queue[rear - 1][0], queue[rear - 1][1]);
        }
    }
    return graph[N - 1][M - 1];
}
int main(void){
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%1d", &graph[i][j]);
        }
    }
    cnt = bfs(0, 0);
    printf("%d", cnt);
}