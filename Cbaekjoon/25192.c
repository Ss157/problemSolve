#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
    int visited;
    char str[21];
}chat_room;

chat_room arr[100000] = {0};
int N, cnt = 0, tmp = 0;

int compare(const void * a, const void * b){
    if(strcmp((*(chat_room *)a).str, (*(chat_room *)b).str) > 0){
        return 1;
    }
    else if(strcmp((*(chat_room *)a).str, (*(chat_room *)b).str) == 0){
        return 0;
    }
    else{
        return -1;
    }
}

int main(void){
    scanf("%d", &N);
    while(N--){
        scanf("%s", arr[tmp].str);
        tmp++;
        if(strcmp(arr[tmp - 1].str, "ENTER") == 0){
            tmp--;
            qsort(arr, tmp, sizeof(chat_room), compare);
            for(int j = 0; j < tmp - 1; j++){
                if(strcmp(arr[j].str, arr[j + 1].str) != 0){
                    cnt++;
                }
            }
            if(tmp != 0){
                cnt++;
            }
            tmp = 0;
        }
    }
    qsort(arr, tmp, sizeof(chat_room), compare);
    for(int j = 0; j < tmp - 1; j++){
        if(strcmp(arr[j].str, arr[j + 1].str) != 0){
            cnt++;
        }
    }
    if(tmp != 0){
        cnt++;
    }
    printf("%d", cnt);
}