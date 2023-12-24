#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void * a, const void * b){
    char * aa = (char *)a;
    char * bb = (char *)b;
    int lenaa = strlen(aa);
    int lenbb = strlen(bb);
    if(lenaa < lenbb){
        return -1;
    }
    else if(lenaa > lenbb){
        return 1;
    }
    else{
        if(strcmp(aa, bb) > 0){
            return 1;
        }
        else if(strcmp(aa, bb) < 0){
            return -1;
        }
        else{
            return 0;
        }
    }
}

int main(void){
    int N;
    char arr[20000][51] = {0};
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%s", arr[i]);
    }

    qsort(arr, N, sizeof(char) * 51, compare);

    for(int i = 0; i < N; i++){
        if(strcmp(arr[i - 1], arr[i]) == 0){
            continue;
        }
        printf("%s\n", arr[i]);
    }
}