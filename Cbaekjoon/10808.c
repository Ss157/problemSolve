#include <stdio.h>
#include <string.h>

int main(void){
    char str[101];
    scanf("%s", str);
    int len = strlen(str);
    int arr[26] = {0};
    for(int i = 0; i < len; i++){
        arr[str[i] - 97] += 1;
    }
    for(int i = 0; i < 26; i++){
        printf("%d ", arr[i]);
    }
}