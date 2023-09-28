#include <stdio.h>
#include <math.h>
int main(void){
    int N;
    int WOW[7] = {100, 50, 20, 10, 5, 2, 1};
    scanf("%d", &N);
    int arr[10000];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    int loc1 = arr[0];
    int loc2 = arr[1];
    for(int i = 2; i < N; i++){
        if(loc1 <= loc2){
            loc1 += arr[i];
        }
        else if(loc1 > loc2){
            loc2 += arr[i];
        }
    }
    int temp = abs(loc1 - loc2);
    int cnt = 0;
    if(temp == 0){
        printf(0);
    }
    else{
        for(int i = 0; i < 7; i++){
            while(1){
                if((temp / WOW[i]) != 0){
                    cnt += temp / WOW[i];
                    temp = temp % WOW[i];
                }
                else{
                    break;
                }
            }
        }
    }
    printf("%d", cnt);
}