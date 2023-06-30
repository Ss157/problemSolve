#include <stdio.h>

int main(void){

    while(1){
        int num = 0;
        int arr[10000] = {0};
        int cnt = 0;
        scanf("%d", &num);
        if(num == -1) break;

        for(int i = 1; i < num; i++){
            if(num % i == 0){
                arr[cnt] = i;
                cnt++;
            }
        }
        cnt--;
        int divisor = 0;
        for(int i = 0; i <= cnt; i++){
            divisor += arr[i];
        }
        if(num == divisor){
            printf("%d = ", num);
            for(int i = 0; i <= cnt; i++){
                printf("%d", arr[i]);
                if(cnt != i) printf(" + ");
            }
            printf("\n");
        }
        else {
            printf("%d is NOT perfect.\n", num);
        }
    }
}