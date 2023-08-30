#include <stdio.h>
int arr[40][2] = {0};
void fibonacci(int n) {
    for(int i = 2; i < n + 1; i++){
        arr[i][0] = arr[i - 1][0] + arr[i - 2][0];
        arr[i][1] = arr[i - 1][1] + arr[i - 2][1];
    }
}

int main(void){
    arr[0][0] = 1;
    arr[0][1] = 0;
    arr[1][0] = 0;
    arr[1][1] = 1;

    int TestCase = 0;
    scanf("%d", &TestCase);
    for(int i = 0; i < TestCase; i++){
        int input = 0;
        scanf("%d", &input);
        fibonacci(input);
        printf("%d %d\n", arr[input][0], arr[input][1]);
    }
}