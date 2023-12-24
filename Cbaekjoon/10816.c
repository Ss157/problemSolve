#include <stdio.h>
#include <stdlib.h>

int Narr[500000], Marr[500000], visited[500000] = {0};

int compare(const void * a, const void * b){
    if(*(int *)a < *(int *)b){
        return -1;
    }
    else if(*(int *)a > *(int *)b){
        return 1;
    }
    else{
        return 0;
    }
}

int binary_search_bound(int *arr, int val, int N){
    int first = 0, last = N, mid;
    while (last > first){
        mid = (first + last)/2;
        arr[mid] > val ? last = mid : (first = mid + 1);
    }
    int temp = last;
    first = 0, last = N;
    while (last > first){
        mid = (first + last)/2;
        arr[mid] >= val ? last = mid : (first = mid + 1);
    }
    return temp - last;
}

int main(void){
    int N = 0, M = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &Narr[i]);
    }
    scanf("%d", &M);
    for(int i = 0; i < M; i++){
        scanf("%d", &Marr[i]);
    }

    qsort(Narr, N, sizeof(int), compare);

    for(int i = 0; i < M; i++){
        int a = binary_search_bound(Narr, Marr[i], N);
        printf("%d ", a);
    }
}