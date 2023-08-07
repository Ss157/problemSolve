#include <stdio.h>

int main(void){
    int sub1, sub2;
    int arr[4] = {0};
    for(int i = 0; i < 4; i++){
        scanf("%d", &arr[i]);
    }
    int cnt = 0;
    int min = arr[0];
    int index = 0;
    for(int i = 1; i < 4; i++){
        if(arr[i] < min){
            index = i;
            min = arr[i];
        }
    }
    arr[index] = 0;
    for(int i = 0; i < 4; i++){
        cnt += arr[i];
    }

    scanf("%d %d", &sub1, &sub2);
    if(sub1 >= sub2){
        cnt += sub1;
    }
    else{
        cnt += sub2;
    }
    
    printf("%d", cnt);
}