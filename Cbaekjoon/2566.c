#include <stdio.h>
int main(void){
    int arr[9][9];
    int maxi = 0;
    int row = 1, column = 1;

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            scanf("%d", &arr[i][j]);
            if(arr[i][j] > maxi){
                maxi = arr[i][j];
                row = i + 1;
                column = j + 1;
            }
        }
    }
    printf("%d \n", maxi);
    printf("%d %d", row, column);
}