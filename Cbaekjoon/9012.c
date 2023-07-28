#include <stdio.h>
#include <string.h>

int cnt = 1;
int main(void){
    int input;
    scanf("%d", &input);
    getchar();
    for(int i = 0; i < input; i++){
        int count = 0;
        cnt = 1;
        char str[51] = {0};
        while(1){
            scanf("%c", &str[count]);
            if(str[count] == '\n'){
                break;
            }
            if(str[count] == ')'){
                if(count == 0 || str[count - 1] != '('){
                    cnt = 0;
                }
                else{
                    str[count] = 0;
                    str[count - 1] = 0;
                    count -= 2;
                }
            }
            count++;
        }
        if(count != 0) cnt = 0;
        if(cnt){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}