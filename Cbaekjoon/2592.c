#include <stdio.h>

int main(void){
    int arr[10] = {0};
    int cnt[101] = {0};
    int sum = 0;
    int max = 0;
    int index = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
        cnt[arr[i] / 10]++;
    }
    for(int i = 0; i < 101; i++){
        if(max < cnt[i]){
            max = cnt[i];
            index = i;
        }
    }
    printf("%d\n%d", sum / 10, index * 10);
}