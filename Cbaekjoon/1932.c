#include <stdio.h>

int main(void){
    int n, arr[500][500] = {0}, tmp1, tmp2;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 1; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            if(j == 0){
                arr[i][j] += arr[i - 1][j];
            }
            else{
                if(arr[i - 1][j - 1] >= arr[i - 1][j]){
                    arr[i][j] += arr[i - 1][j - 1];
                }
                else{
                    arr[i][j] += arr[i - 1][j];
                }
            }
        }
    }
    tmp1 = 0;
    for(int i = 0; i < n; i++){
        if(arr[n - 1][i] > tmp1){
            tmp1 = arr[n - 1][i];
        }
    }
    printf("%d", tmp1);
}