#include <stdio.h>

int main(void){
    int T, a, b, data_cnt = 0;
    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        scanf("%d %d", &a, &b);
        data_cnt = a;
        for(int i = 0; i < b - 1; i++){
            data_cnt *= a;
            data_cnt %= 10;
        }
        data_cnt %= 10;
        if(data_cnt != 0){
            printf("%d\n", data_cnt);
        }
        else{
            printf("10\n");
        }
    }
}