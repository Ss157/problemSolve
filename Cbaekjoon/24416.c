#include <stdio.h>
int cnt_recursion = 0;
int cnt_dyna = 0;
long long int f[10000];
int fib(int n) {
    if (n == 1 || n == 2){
        cnt_recursion++;
        return 1;
    }
    else return (fib(n - 1) + fib(n - 2));
}

int fibonacci(int n) {
    for(int i = 3; i < n + 1; i++){
        f[i] = f[i - 1] + f[i - 2];
        cnt_dyna++;
    }
    return f[n];
}

int main(void){
    int num;
    scanf("%d", &num);
    f[1] = 0;
    f[2] = 0;
    fib(num);
    fibonacci(num);
    printf("%d %d", cnt_recursion, cnt_dyna);
}