#include <stdio.h>
#include <string.h>

int main(void){
    int num = 0;
    scanf("%d", &num);
    int i = 0;
    int temp = 0;
    int cnt  = 1;
    char arr[6] = {0};
    for(i = num / 2; i < num; i++){
        if(temp == num){
            cnt = 0;
            break;
        }

        sprintf(arr, "%d", i);
        int len = strlen(arr);

        temp = 0;
        for(int j = 0; j < len; j++){
            temp += arr[j] - 48;
        }
        temp += i;
    }
    if(cnt){
        printf("0");
    }
    else{
        printf("%d", i - 1);
    }
}