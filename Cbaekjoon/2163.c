#include <stdio.h>

int main(void){
    int width, height;
    scanf("%d %d", &width, &height);
    int cnt = 0;
    cnt += width - 1;
    cnt += width * (height - 1);
    printf("%d", cnt);
}