#include <stdio.h>
long long int gcd(long long int A, long long int B){
    if(B == 0){
        return A;
    }
    else{
        return gcd(B, A % B);
    }
}
int main(void){
    long long int A, B, tmp = 0;
    scanf("%lld %lld", &A, &B);
    
    printf("%lld", A * B / gcd(A, B));
}