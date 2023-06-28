#include <stdio.h>

int main(void){
    int arr[100][100] = {0};
    int input = 0;
    scanf("%d", &input);
    int x = 0, y = 0;
    for(int i = 0; i < input; i++){
        scanf("%d", &x);
        scanf("%d", &y);
        x -= 1;
        y -= 1;
        for(int j = 0; j < 10; j++){
            for(int k = 0; k < 10; k++){
                arr[j + x][k + y] = 1;
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            if(arr[i][j] == 1){
                cnt += 1;
            }
        }
    }
    printf("%d", cnt);
}