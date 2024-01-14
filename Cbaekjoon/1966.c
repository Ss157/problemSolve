#include <stdio.h>

int main(void){
    int T, N, M, cnt, idx, arr[100] = {0};
    scanf("%d", &T);

    while(T--){
        cnt = 1, idx = 0;
        scanf("%d %d", &N, &M);
        for(int i = 0; i < N; i++){
            scanf("%d", &arr[i]);
        }
        while(1){
            int max = 0;
            
            for(int j = 0; j < N; j++){
                if(max < arr[j]){
                    max = arr[j];
                }
            }
            while (arr[idx] != max){
                idx = (idx+1) % N;
            }
            if(idx == M){
                break;
            }
            cnt++;
            arr[idx] = 0;
        }
        printf("%d\n", cnt);
    }
}