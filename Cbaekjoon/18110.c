#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int arr[300000];
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
    int n = 5; 
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);
    double cnt = round(n * 0.15);
    double sum = 0;
    for(int i = cnt; i < n - cnt; i++){
        sum += arr[i];
    }
    if(n == 0){
        printf("0");
    }
    else{
        printf("%d", (int)((double)sum / (n - (cnt * 2.0)) + 0.5));
    }
}