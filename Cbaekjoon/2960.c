#include <stdio.h>
int N, K, cnt, j, arr[1001];
int main(void){
    scanf("%d %d", &N, &K);
    for (int i = 2; i < N + 1; i++)
    {
        if (arr[i] == 1)
        {
            continue;
        }
        if (cnt == K)
        {
            break;
        }
        for (j = i; j < N + 1; j += i)
        {
            if (arr[j] == 0)
            {
                cnt++;
            }
            
            arr[j] = 1;
            if (cnt == K)
            {
                break;
            }
        }
    }
    
    printf("%d", j);
}