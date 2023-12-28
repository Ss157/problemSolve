#include <stdio.h>
#include <string.h>
char arr[100] = {0};
char str[101];
int idx = 0, cnt = 0;
int main(void){
    while(1){
        scanf("%[^\n]s", str);
        getchar();
        if(str[0] == '.'){
            break;
        }
        int len = strlen(str);
        for(int i = 0; i < len; i++){
            if(str[i] == '(' || str[i] == '['){
                arr[idx] = str[i];
                idx++;
            }
            else if(str[i] == ')' && arr[idx - 1] == '(' && idx > 0){
                idx--;
            }
            else if(str[i] == ']' && arr[idx - 1] == '[' && idx > 0){
                idx--;
            }
            else if(str[i] == ']' || str[i] == ')'){
                cnt = 1;
                break;
            }
        }

        if(idx == 0 & cnt == 0){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
        cnt = 0;
        idx = 0;
    }
}