#include <stdio.h>
int N, M, cnt, arr[1025][1025];
int x1, x2, y1, y2;

int main(void){
    scanf("%d %d", &N, &M);
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            scanf("%d", &arr[i][j]);
            if(i == 1)
            {
                arr[i][j] += arr[i][j - 1];
            }
            else if(j == 1)
            {
                arr[i][j] += arr[i - 1][j];
            }
            else
            {
                arr[i][j] += arr[i][j - 1] + arr[i - 1][j] - arr[i - 1][j - 1];
            }
            
        }
    }
    
    for (int i = 0; i < M; i++)
    {
        cnt = 0;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        cnt = arr[x2][y2] - arr[x2][y1 - 1] - arr[x1 - 1][y2] + arr[x1 - 1][y1 - 1];
        printf("%d\n", cnt);
    }
}