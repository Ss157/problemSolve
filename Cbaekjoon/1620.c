#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    int idx;
    char name[21];
}pokemon;
int N, M, left, right, mid;
pokemon arr[100000];
pokemon sorted_arr[100000];
char input[20];

int compare(const void * a, const void * b){
    if(strcmp((*(pokemon *)a).name, (*(pokemon *)b).name) > 0)
    {
        return 1;
    }
    else if(strcmp((*(pokemon *)a).name, (*(pokemon *)b).name) == 0)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

int main(void){
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
    {
        scanf("%s", arr[i].name);
        sorted_arr[i].idx = arr[i].idx = i;
        strcpy(sorted_arr[i].name, arr[i].name);
    }
    
    qsort(sorted_arr, N, sizeof(pokemon), compare);

    for (int i = 0; i < M; i++)
    {
        scanf("%s", input);
        if(input[0] >= '0' && input[0] <= '9')
        {
            printf("%s\n", arr[atoi(input) - 1].name);
        }
        else
        {
            left = 0, right = N - 1, mid;
            while (left <= right)
            {
                mid = (left + right) / 2;
                if(strcmp(sorted_arr[mid].name, input) > 0)
                {
                    right = mid - 1;
                }
                else if(strcmp(sorted_arr[mid].name, input) < 0)
                {
                    left = mid + 1;
                }
                else
                {
                    break;
                }
            }
            printf("%d\n", sorted_arr[mid].idx + 1);
        }
    }
}