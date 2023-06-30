#include <stdio.h>

int main(void){
    int num = 0, index = 0;
    int arr[10000];
    int cnt = 0;

    scanf("%d", &num);
    scanf("%d", &index);

    for(int i = 1; i <= num; i++){
        if(cnt >= index) break;
        if(num % i == 0){
            arr[cnt] = i;
            cnt++;
        }
    }

    printf("%d", arr[--index]);
}