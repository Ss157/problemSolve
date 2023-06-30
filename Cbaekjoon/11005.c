#include <stdio.h>

int main(void){
    int num = 0, base = 0;
    scanf("%d", &num);
    scanf("%d", &base);

    int arr[100000];
    int cnt = 0;
    while(1){
        if(num < base) break;
        arr[cnt] = num % base;
        num /= base;
        cnt++;
    }
    arr[cnt] = num;
    for(int i = cnt; i >= 0; i--){
        if(arr[i] >= 10){
            printf("%c", (char)(arr[i] + 55));
        }
        else
        printf("%d", arr[i]);
    }
}