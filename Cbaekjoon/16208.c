#include <stdio.h>

int main(void){
    int n;
    int arr[500000];
    scanf("%d", &n);

    long long int cnt = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        cnt += arr[i];
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = n - 1; j > i; j--){
            if(arr[j - 1] > arr[j]){
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    long long int result = 0;
    for(int i = 0; i < n; i++){
        result += arr[i] * (cnt - arr[i]);
        cnt = cnt - arr[i];
    }

    printf("%lld", result);
}