#include <stdio.h>
int main(void){
    int N, cnt = 0;
    scanf("%d", &N);
    for (int i = 1; i * i <= N; i++)
    {
        cnt++;
    }
    printf("%d", cnt);
}