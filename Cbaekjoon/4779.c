#include <stdio.h>
#include <math.h>

int fuc(int N){
    int len = pow(3, N);
    
    if(len == 1){
        printf("-");
        return 0;
    }
    fuc(N - 1);
    for(int i = 0; i < len / 3; i++){
        printf(" ");
    }
    fuc(N - 1);
}
int main(void){
    int N;
    while (scanf("%d", &N)!=EOF)
    {
        fuc(N);
        printf("\n");
    }
}