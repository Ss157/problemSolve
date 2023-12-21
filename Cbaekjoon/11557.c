#include <stdio.h>
#include <string.h>

int main(void){
    int T, N, L = 0, tmp_L;
    char name[21];
    char tmp_name[21];
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &N);
        L = 0;
        while (N--)
        {
            scanf("%s %d", tmp_name, &tmp_L);
            if(L < tmp_L){
                L = tmp_L;
                strcpy(name, tmp_name);
            }
        }
        printf("%s\n", name);
    }
}