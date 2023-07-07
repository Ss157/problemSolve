#include <stdio.h>
#include <string.h>

int main(void){
    int th = 0;
    scanf("%d", &th);
    char arr[10] = {0};
    int many = 0;
    int i = 666;
    for(i = 666; i < 2000000000; i++){
        if(many == th) break;
        sprintf(arr, "%d", i);
        int len = strlen(arr);
        for(int j = 0; j < len - 2; j++){
            if(arr[j] == '6' && arr[j + 1] == '6' && arr[j + 2] == '6'){
                many++;
                break;
            }
        }
    }
    i--;
    printf("%d\n", i);
}