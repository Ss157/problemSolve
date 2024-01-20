#include <stdio.h>
#include <string.h>
int T, N, cnt = 1;
char type[21], temp[21];
char type_list[30][21];
int type_list_cnt[30], type_cnt = 0;
int main(void){
    scanf("%d", &T);
    while(T--){
        cnt = 1, type_cnt = 0;
        scanf("%d", &N);
        for (int i = 0; i < N; i++)
        {
            scanf("%s %s", temp, type);
            int k;
            for(k = 0; k < type_cnt; k++){
                if(strcmp(type_list[k], type) == 0){
                    type_list_cnt[k]++;
                    break;
                }
            }
            if(k == type_cnt){
                strcpy(type_list[type_cnt], type);
                type_list_cnt[type_cnt++] = 1;
            }
        }

        for(int k = 0; k < type_cnt; k++){
            cnt *= (type_list_cnt[k] + 1);
        }
        printf("%d\n", cnt - 1);
    }
}