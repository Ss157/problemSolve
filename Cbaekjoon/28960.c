#include <stdio.h>

int main(void){
    int H, L, A, B;
    scanf("%d %d %d %d", &H, &L, &A, &B);
    if(A <= H * 2 && B <= L){
        printf("YES");
    }
    else if(B <= H * 2 && A <= L){
        printf("YES");
    }
    else{
        printf("NO");
    }
}