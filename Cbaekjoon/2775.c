#include <stdio.h>

int main(void){
    int TestCase;
    int arr[15][15] = {0};
    scanf("%d", &TestCase);

    for(int i = 0; i < 15; i++){
        arr[0][i] = i;
    }
    for(int i = 1; i < 15; i++){
        for(int j = 1; j < 15; j++){
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
    }
    int floor, unit;
    while(TestCase--){
        scanf("%d %d", &floor, &unit);
        printf("%d\n", arr[floor][unit]);
    }
}