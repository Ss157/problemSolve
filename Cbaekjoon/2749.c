#include <stdio.h>
long long int arr[1500000] = {0};
long long int fibo(int num){
    for(int i = 2; i < num + 1; i++){
        arr[i] = (arr[i - 1] + arr[i - 2]) % 1000000;
    }
    return arr[num];
}

int main(void){
    long long int num;
    arr[0] = 0;
    arr[1] = 1;
    scanf("%lld", &num);
    printf("%lld", fibo(num % 1500000));
}