#include <stdio.h>
int X, Y, Z, cnt, arr[100][100][100];
int queue[1000001][4];
int front, rear;
int dx[6] = {1, -1, 0, 0, 0, 0};
int dy[6] = {0, 0, 1, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

void bfs(void){
    while(front < rear)
    {
        for (int i = 0; i < 6; i++)
        {
            int n1 = queue[front][1] + dx[i];
            int n2 = queue[front][2] + dy[i];
            int n3 = queue[front][3] + dz[i];
            if(n1 < 0 || n2 < 0 || n3 < 0 || n1 >= Z || n2 >= Y || n3 >= X)
            {
                continue;
            }
            if(arr[n1][n2][n3] == 0)
            {
                arr[n1][n2][n3] = 1;
                queue[rear][0] = queue[front][0] + 1;
                queue[rear][1] = n1;
                queue[rear][2] = n2;
                queue[rear++][3] = n3;
            }
        }
        front++;
    }
}

int main(void){
    scanf("%d %d %d", &X, &Y, &Z);
    cnt = X * Y * Z;
    for (int i = 0; i < Z; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            for (int k = 0; k < X; k++)
            {
                scanf("%d", &arr[i][j][k]);
                if (arr[i][j][k] == -1)
                {
                    cnt--;
                }
                else if (arr[i][j][k] == 1)
                {
                    queue[rear][0] = 0;
                    queue[rear][1] = i;
                    queue[rear][2] = j;
                    queue[rear++][3] = k;
                }
            }
        }
    }
    bfs();
    
    if (cnt != rear)
    {
        printf("-1");
    }
    else
    {
        printf("%d", queue[rear - 1][0]);
    }
}