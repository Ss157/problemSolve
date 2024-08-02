#include <stdio.h>
#include <string.h>

int N, cnt = 1, arr[1100000];

void f(void){
    for (int i = 2; i <= 1050; i++)
    {
        if (arr[i] == 1)
        {
            continue;
        }
        for (int j = i * i; j <= 1100000; j += i)
        {
            arr[j] == 1;
        }
    }
}

int main(void){
    arr[1] = 1;
    scanf("%d", &N);
    f();
    int i;
    while (cnt)
    {
        char str[10];
        if (arr[N] == 0)
        {
            sprintf(str, "%d", N);
            int len = strlen(str);
            for (i = 0; i < len / 2; i++)
            {
                if (str[i] != str[len - i - 1])
                {
                    break;
                }
            }
            if (i == len / 2)
            {
                printf("%d", N);
                cnt = 0;
            }
        }
        N++;
    }
}

// https://kyr-db.tistory.com/257?category=1008500