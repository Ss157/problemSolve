#include <stdio.h>
int M, N, cnt, arr[1002][1002];
int dy[4] = {1, -1, 0, 0};
int dz[4] = {0, 0, 1, -1};
int front = 0, rear = 0, pop[3];
int queue[10000000][3];

void bfs(void)
{
    while(front < rear)
    {
        pop[1] = queue[front][1];
        pop[2] = queue[front++][2];
        for (int i = 0; i < 4; i++)
        {
            int ny = pop[1] + dy[i];
            int nz = pop[2] + dz[i];
            if(ny <= 0 || nz <= 0 || ny > N || nz > M)
            {
                continue;
            }
            else if (arr[ny][nz] == 0)
            {
                arr[ny][nz] = 1;
                queue[rear][0] = queue[front - 1][0] + 1;
                queue[rear][1] = ny;
                queue[rear++][2] = nz;
            }
        }
    }
}

int main(void){
    scanf("%d %d", &M, &N);
    cnt = N * M;
    for (int j = 1; j <= N; j++)
    {
        for (int k = 1; k <= M; k++)
        {
            scanf("%d", &arr[j][k]);
            if(arr[j][k] == -1)
            {
                cnt--;
            }
            else if (arr[j][k] == 1)
            {
                queue[rear][0] = 0;
                queue[rear][1] = j;
                queue[rear++][2] = k;
            }
        }
    }

    bfs();

    if (rear != cnt)
    {
        printf("-1");
    }
    else
    {
        printf("%d", queue[rear - 1][0]);
    }
}