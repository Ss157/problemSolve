#include <stdio.h>
long long int arr[90] = {0};
long long int fibo(int num){
    for(int i = 2; i < num + 1; i++){
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[num];
}

int main(void){
    int num;
    arr[0] = 0;
    arr[1] = 1;
    scanf("%d", &num);
    printf("%lld", fibo(num));
}