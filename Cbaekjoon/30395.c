#include <stdio.h>

int main(void){
    int N, arr[1000], max = 0, temp = 0, cnt = 1;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < N; i++){
        if(arr[i] != 0){
            temp++;
            cnt = 1;
        }
        else if((arr[i] == 0) && (cnt == 1)){
            cnt = 0;
        }
        else{
            temp = 0;
        }
        if(max < temp){
            max = temp;
        }
    }

    printf("%d", max);
}