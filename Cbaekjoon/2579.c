#include <stdio.h>

int main(void){
    int N, arr[301][2] = {0};
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        scanf("%d", &arr[i][0]);
    }

    for(int i = 2; i <= N; i++){
        arr[i][1] = arr[i][0] + arr[i - 1][0];

        if(arr[i - 2][0] >= arr[i - 2][1]){
            arr[i][0] += arr[i - 2][0];
        }
        else{
            arr[i][0] += arr[i - 2][1];
        }
    }
    
    if(arr[N][0] >= arr[N][1]){
        printf("%d", arr[N][0]);
    }
    else{
        printf("%d", arr[N][1]);
    }
}