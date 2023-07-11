#include <stdio.h>

int main(void){
    int N, M;
    scanf("%d %d", &N, &M);
    int arr[N][M];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int TestCase;
    scanf("%d", &TestCase);

    while(TestCase--){
        int a, b, x, y;
        int cnt = 0;
        scanf("%d %d %d %d", &a, &b, &x, &y);
        for(int i = a - 1; i < x; i++){
            for(int j = b - 1; j < y; j++){
                cnt += arr[i][j];
            }
        }
        printf("%d\n", cnt);
    }
}