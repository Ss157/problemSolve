#include <stdio.h>
int n, max, arr[1001], dp0ton[1001], dpnto0[1001];
int main(void){
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        dp0ton[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j] && dp0ton[i] < dp0ton[j] + 1)
            {
                dp0ton[i] = dp0ton[j] + 1;
            }
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        dpnto0[i] = 1;
        for (int j = n - 1; j > i; j--)
        {
            if (arr[i] > arr[j] && dpnto0[i] < dpnto0[j] + 1)
            {
                dpnto0[i] = dpnto0[j] + 1;
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if (max < dp0ton[i] + dpnto0[i] - 1)
        {
            max = dp0ton[i] + dpnto0[i] - 1;
        }
    }
    printf("%d ", max);
}