#include <stdio.h>
#include <string.h>

int main(void){
    char input[100];
    scanf("%s", input);

    int cnt = 0;
    for(int i = 0; i < strlen(input); i++){
        if(input[i] == 'c'){
            if(input[i + 1] == '=' || input[i + 1] == '-'){
                i++;
                cnt++;
                continue;
            }
        }
        if(input[i] == 'd'){
            if(input[i + 1] == '-'){
                i++;
                cnt++;
                continue;
            }
            if(input[i + 1] == 'z' && input[i + 2] == '='){
                i += 2;
                cnt++;
                continue;
            }
        }
        if(input[i] == 'l'){
            if(input[i + 1] == 'j'){
                i++;
                cnt++;
                continue;
            }
        }
        if(input[i] == 'n'){
            if(input[i + 1] == 'j'){
                i++;
                cnt++;
                continue;
            }
        }
        if(input[i] == 's'){
            if(input[i + 1] == '='){
                i++;
                cnt++;
                continue;
            }
        }
        if(input[i] == 'z'){
            if(input[i + 1] == '='){
                i++;
                cnt++;
                continue;
            }
        }
        cnt++;
    }
    printf("%d", cnt);
}