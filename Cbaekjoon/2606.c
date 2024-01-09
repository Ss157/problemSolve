#include <stdio.h>
int arr[101][101];
int visited[101] = {0};
int N, M, x, y, cnt = 0;

void fun(int start, int tmp){
    visited[start] = 1;
    cnt++;

    for(int i = 1; i <= tmp; i++){
        if(arr[start][i] == 1 && visited[i] == 0){
            fun(i, tmp);
        }
    }
}
int main(void){
    scanf("%d %d", &N, &M);
    for(int i = 0; i < M; i++){
        scanf("%d %d", &x, &y);
        arr[x][y] = 1;
        arr[y][x] = 1;
    }
    fun(1, N);
    printf("%d", cnt - 1);
}