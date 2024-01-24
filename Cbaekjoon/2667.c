#include <stdio.h>
int N, arr[26][26] = {0};
int apart[26*26] = {0}, count, sum = 0;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int dfs(int x, int y){
    if(x < 0 || y < 0 || x >= N || y >= N) {
        return 0;
    }
    
    if(arr[x][y] == 1) {
        arr[x][y] = 0;
        count++;
        
        for(int i = 0; i < 4; i++) {
            dfs(x + dx[i], y + dy[i]);
        }
        return 1;
    }
    return 0;
}

int main(void){
    char tmp;
    scanf("%d", &N);
    getchar();
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%c", &tmp);
            arr[i][j] = tmp - '0';
        }
        getchar();
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(dfs(i, j) == 1) {
                apart[count]++;
                count = 0;
                sum++;
            }
        }
    }
    printf("%d\n", sum);
    for(int i = 0; i < 26*26; i++) {
        if(apart[i] != 0){
            int k = apart[i];
            for(int j = 0; j < k; j++) {
                printf("%d\n", i);
            }
        }
    }
}