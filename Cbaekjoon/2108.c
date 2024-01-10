#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int arr[500000] = {0}, visited[500000] = {0};
int arr_mode[8001] = {0};

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

int main(void){
    int N, mid;
    double sum = 0;
    scanf("%d", &N);
    mid = N / 2;
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
        arr_mode[arr[i] + 4000]++;
    }
    qsort(arr, N, sizeof(int), compare);

    int max = 0, index_1st = 0, index_2nd = 0, cnt = 0;
    for(int i = 0; i < 8002; i++){
        if(max < arr_mode[i]){
            max = arr_mode[i];
            index_1st = i;
        }
        else if(max == arr_mode[i]){
            if(max != arr_mode[index_2nd]){
                cnt = 0;
            }
            if(cnt == 0){
                index_2nd = i;
                cnt = 1;
            }
        }
    }

    if(sum < 0){
        printf("%d\n", (int)(sum / N - 0.5)); //»ê¼úÆò±Õ
    }
    else{
        printf("%d\n", (int)(sum / N + 0.5)); //»ê¼úÆò±Õ
    }
    printf("%d\n", arr[mid]); //Áß¾Ó°ª
    if(max == arr_mode[index_2nd]){
        printf("%d\n", index_2nd - 4000); //ÃÖºó°ª
    }
    else{
        printf("%d\n", index_1st - 4000); //ÃÖºó°ª
    }
    printf("%d\n", arr[N - 1] - arr[0]); //¹üÀ§
}