#include <stdio.h>

int main(void){
    int T, N, tmp;
    scanf("%d", &T);
    while (T--)
    {   
        scanf("%d", &N);
        tmp = N;
        N++;
        tmp %= 100;
        if(N % tmp == 0){
            printf("Good\n");
        }
        else{
            printf("Bye\n");
        }
    }
}