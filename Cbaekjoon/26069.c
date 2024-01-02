#include <stdio.h>
#include <string.h>

int main(void){
    int N, cnt = 1, tmp1 = 0, tmp2 = 0;
    char arr[1000][21] = {"ChongChong"}, str1[21], str2[21];
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        scanf("%s %s", str1, str2);
        for(int j = 0; j < cnt; j++){
            if(strcmp(str1, arr[j]) == 0){
                tmp1++;
            }
            if(strcmp(str2, arr[j]) == 0){
                tmp2++;
            }
            //printf("%s %s %s\n", str1, str2, arr[j]);
        }
        //printf("%d %d %d\n", tmp1, tmp2, cnt);
        if((tmp1 == 1 && tmp2 == 0) || (tmp1 == 0 && tmp2 == 1)){
            if(tmp1){
                strcpy(arr[cnt], str2);
            }
            else{
                strcpy(arr[cnt], str1);
            }
            cnt++;
        }
        tmp1 = 0, tmp2 = 0;
    }
    printf("%d", cnt);
}