#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int M, N;
    char arr[201][201] = {0};
    char temp[10];
    scanf("%d %d", &M, &N);
    for(int i = 0; i < M; i++){
        scanf("%s", &arr[i]);
    }

    // for(int i = 0; i < M; i++){
    //     for(int j = 0; j < N; j++){
    //         printf("%c ", arr[i][j]);
    //     }
    //     printf("\n");
    // }
    
    double sum = 0;
    int cnt = 0;
    double tmp = 0;
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            cnt = 0;
            tmp = 0;
            if((i - 1) >= 0){
                tmp += abs(arr[i - 1][j] - arr[i][j]);
                cnt++;
            }
            if((j - 1) >= 0){
                tmp += abs(arr[i][j - 1] - arr[i][j]);
                cnt++;
            }
            if((i + 1) < M){
                tmp += abs(arr[i + 1][j] - arr[i][j]);
                cnt++;
            }
            if((j + 1) < N){
                tmp += abs(arr[i][j + 1] - arr[i][j]);
                cnt++;
            }
            // printf("%d %d %d %f %f\n", i, j, cnt, tmp, sum);
            sum += tmp / cnt;
        }
    }
    printf("%.4lf", sum);
}