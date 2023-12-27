#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int index;
} dot;

int compare(const void * a, const void * b){
    dot * first = (dot *) a;
    dot * second = (dot *) b;
    if(first->x < second->x){
        return -1;
    }
    else if(first->x > second->x){
        return 1;
    }
    else{
        return 0;
    }
}

dot dots[1000000] = {0};
int N, arr[1000000] = {0}, cnt = 0;
int main(void){
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%d", &dots[i].x);
        dots[i].index = i;
    }

    qsort(dots, N, sizeof(dot), compare);
    
    arr[dots[0].index] = 0;
    for(int i = 1; i < N; i++){
        if(dots[i - 1].x == dots[i].x){
            arr[dots[i].index] = cnt;
        }
        else{
            cnt++;
            arr[dots[i].index] = cnt;
        }
    }

    for(int i = 0; i < N; i++){
        printf("%d ", arr[i]);
    }
}