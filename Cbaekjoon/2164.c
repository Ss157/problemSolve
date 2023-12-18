#include <stdio.h>

int main(void){
    int arr[500000] = {0};
    int N, max = 500000, start_index = 0, last_index, cnt, tictok = 0;
    scanf("%d", &N);
    last_index = cnt = N;
    for(int i = 0; i < N; i++){
        arr[i] = i + 1;
    }
    while(1){
        if(last_index == max){
            last_index -= max;
        }
        if(start_index == max){
            start_index -= max;
        }
        if(cnt == 1){
            break;
        }
        if(tictok == 0){
            arr[start_index] = 0;
            start_index++;
            cnt--;
            tictok = 1;
        }
        else{
            arr[last_index] = arr[start_index];
            arr[start_index] = 0;
            start_index++;
            last_index++;
            tictok = 0;
        }
    }
    for(int i = 0; i < max; i++){
        if(arr[i] != 0){
            printf("%d",arr[i]);
        }
    }
}