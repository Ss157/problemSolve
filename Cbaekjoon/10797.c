#include <stdio.h>

int main(void){
    int num;
    int arr[5];
    int cnt = 0;
    scanf("%d", &num);

    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
        if(arr[i] == num){
            cnt++;
        }
    }
    printf("%d", cnt);
}