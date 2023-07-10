#include <stdio.h>

int main(void){
    int arr[5] = {0};
    int add = 0;
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
        add += arr[i];
    }
    printf("%d", add);
}