#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b){
    if(*(int *)a > *(int *)b){
        return 1;
    }
    else if(*(int *)a == *(int *)b){
        return 0;
    }
    else{
        return -1;
    }
}

int main(void){
    int N, arr[50];
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr, N, sizeof(int), compare);
    printf("%d", arr[0] * arr[N - 1]);
}