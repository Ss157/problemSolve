#include <stdio.h>
#include <string.h>

int arr[10000] = {0};
char str[10] = {0};
int num = 0;
int kk = 0;

int main(void){
    int input;
    scanf("%d", &input);
    for(int i = 0; i < input; i++){
        scanf("%s", str);
        if(strcmp(str, "push") == 0){
            scanf("%d", &num);
            arr[kk] = num;
            kk++;
        }
        else if(strcmp(str, "pop") == 0){
            if(kk > 0){
                printf("%d\n", arr[kk - 1]);
                kk--;
            }
            else{
                printf("-1\n");
            }
        }
        else if(strcmp(str, "size") == 0){
            printf("%d\n", kk);
        }
        else if(strcmp(str, "empty") == 0){
            if(kk == 0){
                printf("1\n");
            }
            else{
                printf("0\n");
            }
        }
        else if(strcmp(str, "top") == 0){
            if(kk == 0){
                printf("-1\n");
            }
            else{
                printf("%d\n", arr[kk - 1]);
            }
        }
    }
}