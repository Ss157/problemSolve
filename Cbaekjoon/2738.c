#include <stdio.h>

int main(void){
    int row, column;
    scanf("%d", &row);
    scanf("%d", &column);
    int arr1[row][column];
    int arr2[row][column];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("%d ", arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }
}