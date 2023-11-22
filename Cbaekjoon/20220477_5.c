#include <stdio.h>
#include <stdlib.h>
int **direction_arr;

void printDirection(int i, int j, int n){
    if (direction_arr[i][j] == 0){
        printf("(%d, %d) -> ", i + 1, j + 1);
    }
    else {
        if (direction_arr[i][j] == 2){
            printDirection(i, j - 1, n);
        }
        else{
            printDirection(i - 1, j, n);
        }
        if(!((i == (n - 1)) && (j == (n - 1)))){
            printf("(%d, %d) -> ", i + 1, j + 1);
        }
        else{
            printf("(%d, %d)", i + 1, j + 1);
        }
    }
}

int main(void){
    int n;
    printf("n 값 입력 : ");
    scanf("%d", &n);
    int **num_arr;
    num_arr = (int **)malloc(sizeof(int*) * (n + 1));
    for(int i = 0; i < n + 1; i++){
        num_arr[i] = (int *)malloc(sizeof(int) * (n + 1));
    }
    
    direction_arr = (int **)malloc(sizeof(int*) * n);
    for(int i = 0; i < n ; i++){
        direction_arr[i] = (int *)malloc(sizeof(int) * n);
    }
    direction_arr[0][0] = 0;

    for(int i = 1; i < n + 1; i++){
        printf("%d행 입력 : ", i);
        for(int j = 1; j < n + 1; j++){
            scanf("%d", &num_arr[i][j]);
        }
    }

    for(int i = 0; i < n + 1; i++){
        num_arr[i][0] = 0;
    }

    for(int j = 1; j < n + 1; j++){
        num_arr[0][j] = 0;
    }
    
    for(int i = 1; i < n + 1; i++){
        for(int j = 1; j < n + 1; j++){
            if(num_arr[i - 1][j] >= num_arr[i][j - 1]){
                num_arr[i][j] += num_arr[i - 1][j];
                direction_arr[i - 1][j - 1] = 1;
            }
            else{
                num_arr[i][j] += num_arr[i][j - 1];
                direction_arr[i - 1][j - 1] = 2;
            }
        }
    }
    direction_arr[0][0] = 0;

    printf("최대값 : %d\n", num_arr[n][n]);
    printf("경로 : ");

    printDirection(n - 1, n - 1, n);

    for(int i = 0; i < n + 1; i++){
        free(num_arr[i]);
    }
    free(num_arr);

    for(int i = 0; i < n + 1; i++){
        free(direction_arr[i]);
    }
    free(direction_arr);
}