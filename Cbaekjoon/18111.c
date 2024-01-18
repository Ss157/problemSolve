#include <stdio.h>

int main(void){
    int N, M, B, arr[500][500];
    int time = 0;
    int max = 0, min = 10000;
    int T = 10000000, H = 256;
    scanf("%d %d %d", &N, &M, &B);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &arr[i][j]);
            if(max < arr[i][j])
                max = arr[i][j];
            else if(min > arr[i][j])
                min = arr[i][j];
        }
    }

    for(int i = max; i >= min; i--){
        int b = B;
        time = 0;
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < M; k++)
            {
                if(arr[j][k] - i < 0){
                    time += i - arr[j][k];
                    b += arr[j][k] - i;
                }
                else if(arr[j][k] - i > 0){
                    time += (arr[j][k] - i) * 2;
                    b += arr[j][k] - i;
                }
            }
        }

        if(b >= 0)
            if(T > time)
                T = time, H = i;
    }

    printf("%d %d", T, H);
}