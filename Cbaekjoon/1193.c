#include <stdio.h>

int main(void){
    int num = 0;
    scanf("%d", &num);
    int cnt = 0;
    while(num >= cnt){
        int temp = cnt + 1;
        printf("temp : %d\n", temp);
        printf("num : %d\n", num);
        printf("cnt : %d\n", cnt);
        while(temp--){
            num -= temp;
            printf("temp : %d\n", temp);
            printf("num : %d\n", num);
        }
        cnt++;
        printf("--------------------\n");
    }
    printf("num : %d\n", num);
    printf("cnt : %d\n", cnt);
    if(cnt % 2 == 1){
        printf("%d/%d", num, cnt);
    }
    else if(cnt % 2 == 0){
        printf("%d/%d", cnt - num, num - cnt);
    }
}