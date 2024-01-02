#include <stdio.h>
typedef struct{
    int queue_stack;
    int data;
}queuestack;
int main(void){
    queuestack Narr[100000];
    int N, M, arr[200000], tmp, cnt = 0, j = 1;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &Narr[i].queue_stack);
        if(Narr[i].queue_stack == 0){
            cnt++;
        }
    }
    for(int i = 0; i < N; i++){
        scanf("%d", &tmp);
        if(Narr[i].queue_stack == 0){
            arr[200000 - 1 - cnt + j] = tmp;
            j++;
        }
    }

    scanf("%d", &M);
    for(int i = 0; i < M; i++){
        scanf("%d", &tmp);
        arr[200000 - 1 - cnt - i] = tmp;
    }
    for(int i = 0; i < M; i++){
        printf("%d ", arr[200000 - 1 - i]);
    }
}