#include <stdio.h>

int main(void){
    int input;
    scanf("%d", &input);

    int arr[input];
    for(int i = 0; i < input; i++){
        scanf("%d", &arr[i]);
    }

    int score = 0;
    int cnt = 0;
    for(int i = 0; i < input; i++){
        if(arr[i] == 1){
            cnt++;
            score += cnt * arr[i];
        }
        else if(arr[i] == 0){
            cnt = 0;
        }
    }
    printf("%d", score);
}