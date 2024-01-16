#include <stdio.h>

int main(void){
    long long K, N, arr[10000], max = 0, cnt, left = 1, right, mid, max_len = 0;
    scanf("%lld %lld", &K, &N);
    for(int i = 0; i < K; i++){
        scanf("%lld", &arr[i]);
        if(arr[i] > max){
            max = arr[i];
        }
    }

    right = max;
    while(left <= right){
        cnt = 0;
        mid = (left + right) / 2;
        for(int i = 0; i < K; i++){
            cnt += arr[i] / mid;
        }
        if(cnt >= N && max_len < mid){
            max_len = mid;
        }

        if(cnt < N){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    printf("%lld", max_len);
}