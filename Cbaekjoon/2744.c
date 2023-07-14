#include <stdio.h>
#include <string.h>

int main(void){
    char arr [100] = {0};
    scanf("%s", arr);
    int len = strlen(arr);
    for(int i = 0; i < len; i++){
        if(arr[i] >= 65 && arr[i] <= 90){
            printf("%c", arr[i] - 65 + 97);
        }
        else if(arr[i] >= 97 && arr[i] <= 122){
            printf("%c", arr[i] - 97 + 65);
        }
    }
}