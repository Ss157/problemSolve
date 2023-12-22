#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x, y;
}dots;

int compare(const void *a, const void *b){
    dots * dots_a = (dots *)a;
    dots * dots_b = (dots *)b;
    if(dots_a->x < dots_b->x){
        return -1;
    }
    else if(dots_a->x > dots_b->x){
        return 1;
    }
    else if(dots_a->x == dots_b->x){
        if(dots_a->y < dots_b->y){
            return -1;
        }
        else if(dots_a->y > dots_b->y){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int main(void){
    int N;
    dots arr[100000];
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }

    qsort(arr, N, sizeof(dots), compare);

    for(int i = 0; i < N; i++){
        printf("%d %d\n", arr[i].x, arr[i].y);
    }
}