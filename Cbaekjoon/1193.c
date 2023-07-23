#include <stdio.h>

int main(void){
    int th, cnt = 1;
    scanf("%d", &th);
    while(1){
        if((cnt - 1) * cnt / 2 < th && th <= cnt * (cnt + 1) / 2){
            break;
        }
        cnt++;
    }

    int temp = cnt * (cnt + 1) / 2;
    if(cnt % 2 == 1){
        printf("%d", temp - th + 1);
        printf("/");
        printf("%d", cnt - temp + th);
    }
    else{
        printf("%d", cnt - temp + th);
        printf("/");
        printf("%d", temp - th + 1);
    }
}