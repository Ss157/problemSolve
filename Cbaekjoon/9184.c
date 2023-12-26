#include <stdio.h>

int main(void){
    int a, b, c, arr[21][21][21];
    for(int a = 0; a < 21; a++){
        for(int b = 0; b < 21; b++){
            for(int c = 0; c < 21; c++){
                if (a <= 0 || b <= 0 || c <= 0){
                    arr[a][b][c] = 1;
                }
                else if (a < b && b < c){
                    arr[a][b][c] = arr[a][b][c - 1] + arr[a][b - 1][c - 1] - arr[a][b - 1][c];
                }
                else{
                    arr[a][b][c] = arr[a - 1][b][c] + arr[a - 1][b - 1][c] + arr[a - 1][b][c - 1] - arr[a - 1][b - 1][c - 1];
                }
            }
        }
    }
    while(1){
        scanf("%d %d %d", &a, &b, &c);
        if(a == -1 && b == -1 && c == -1){
            break;
        }
        printf("w(%d, %d, %d) = ", a, b, c);
        if (a <= 0 || b <= 0 || c <= 0){
            a = 0, b = 0, c = 0;
        }
        else if (a > 20 || b > 20 || c > 20){
            a = 20, b = 20, c = 20;
        }

        printf("%d\n",arr[a][b][c]);
    }
}