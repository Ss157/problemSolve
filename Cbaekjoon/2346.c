#include <stdio.h>

typedef struct{
    int index;
    int data;
}balloon;

int main(void){
    balloon arr[1000] = {0};
    int N, cnt, j, num;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i].data);
        arr[i].index = i + 1;
    }
    num = arr[0].data;
    printf("%d", arr[0].index);
    arr[0].data = 0;
    j = N * 10000;
    for(int i = 0; i < N - 1; i++){
        cnt = 0;
        while(cnt != num){
            if(num > 0){
                if(arr[++j % N].data != 0){
                    cnt++;
                }
            }
            else{
                if(arr[--j % N].data != 0){
                    cnt--;
                }
            }
            //printf("------%d %d \n", cnt, j);
        }
        printf(" %d", arr[j % N].index);
        num = arr[j % N].data;
        arr[j % N].data = 0;
    }
}