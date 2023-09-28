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
    int namagi = total_container % n;
    int ahrt = total_container / n;
    
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > ahrt + 1){
            cnt += (arr[i] - ahrt + 1) * 1;
            arr[i] = arr[i] - ahrt + 1;
        }
        else if(arr[i] < ahrt){
            if
            arr[i] = arr[i] + ahrt;
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] < ahrt - 1){
            cnt += 1;
        }
    }

    printf("%d", cnt);
}