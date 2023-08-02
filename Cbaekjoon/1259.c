#include <stdio.h>
#include <string.h>

int main(void){
    int len = 0;
    while(1){
        char arr[6] = {'0'};
        scanf("%s", arr);
        
        if(arr[0] == '0'){
            break;
        }
        len = strlen(arr);
        int cnt = 1;
        for(int i = 0; i < len / 2; i++){
            if(arr[i] != arr[len - i - 1]){
                cnt = 0;
                break;
            }
        }
        if(cnt){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
}