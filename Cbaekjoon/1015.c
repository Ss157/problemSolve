#include <stdio.h>
int N, arr[50], tmp[50] = {0};
int main(void){
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(arr[i] > arr[j]){
                tmp[i]++;
            }
            else if((arr[i] == arr[j]) && i > j){
                tmp[i]++;
            }
        }
    }
    for(int i = 0; i < N; i++){
        printf("%d ", tmp[i]);
    }
}