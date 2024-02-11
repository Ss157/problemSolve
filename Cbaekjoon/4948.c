#include <stdio.h>
#include <string.h>
int N, cnt, arr[300000];
int main(void){
    while (1)
    {
        cnt = 0;
        scanf("%d", &N);
        if(N == 0)
        {
            break;
        }
        for (int i = 2; i <= N * 2; i++)
        {
            if (arr[i] == 1)
            {
                continue;
            }
            
            for (int j = i + i; j <= N * 2; j += i)
            {
                arr[j] = 1;
            }
        }
        
        for (int i = N + 1; i <= N * 2; i++)
        {
            if (arr[i] == 0)
            {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
}