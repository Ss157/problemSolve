#include <stdio.h>
int N, arr[128][128], cnt, white = 0, blue = 0;

int func(int x, int y, int n){
    cnt = 0;
    for (int i = x; i < n + x; i++)
    {
        for (int j = y; j < n + y; j++)
        {
            if (arr[i][j] == 1)
            {
                cnt++;
            }
            
        }
    }

    if(cnt == n * n){
        blue++;
    }
    else if(cnt == 0){
        white++;
    }
    else{
        func(x, y, n / 2);
        func(x + n / 2, y,  n / 2);
        func(x, y + n / 2, n / 2);
        func(x + n / 2, y + n / 2, n / 2);
    }
}
int main(void){
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    func(0, 0, N);
    printf("%d\n%d", white, blue);
}