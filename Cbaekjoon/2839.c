#include <stdio.h>

int main(void){
    int kg;
    scanf("%d", &kg);
    int cnt = 0;

    while(1){
        if(kg % 5 == 0){
            cnt += kg / 5;
            break;
        }
        kg -= 3;
        cnt++;
        if(kg <= 0) break;
        
    }
    if(kg < 0){
        printf("-1");
    }
    else{
        printf("%d", cnt);
    }
}