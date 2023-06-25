#include <stdio.h>

int main(void){
    int input = 0;
    int cnt = 0;
    scanf("%d", &input);
    while (input != 0){
        input -= 4;
        cnt++;
    }
    for(int i = 0; i < cnt; i++){
        printf("long ");
    }
    printf("int");
}