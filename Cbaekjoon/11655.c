#include <stdio.h>
#include <string.h>

int main(void){
    char arr[101];
    scanf("%[^\n]s", arr);
    int len = strlen(arr);

    for(int i = 0; i < len; i++){
        if(arr[i] >= 'A' && arr[i] <= 'Z'){
            arr[i] -= 13;
            if(arr[i] < 65){
                arr[i] += 26;
            }
        }
        else if(arr[i] >= 'a' && arr[i] <= 'z'){
            arr[i] -= 13;
            if(arr[i] < 97){
                arr[i] += 26;
            }
        }
    }

    for(int i = 0; i < len; i++){
        printf("%c", arr[i]);
    }
}