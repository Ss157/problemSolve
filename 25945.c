#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    int arr[1000000];
    int total_container = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        total_container += arr[i];
    }
    int average = total_container / n;
    int cnt_over = 0;
    int cnt_under = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > average + 1){
            cnt_over += arr[i] - average - 1;
        }
        else if(arr[i] < average){
            cnt_under += average - arr[i];
        }
    }
    if(cnt_over >= cnt_under){
        printf("%d", cnt_over);
    }
    else{
        printf("%d", cnt_under);
    }
}