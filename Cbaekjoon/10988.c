#include <stdio.h>
#include <string.h>

int main(void){
    char str[100];
    scanf("%s", str);
    int first = 0, last = strlen(str) - 1;
    int cnt = 1;
    while(1){
        if(first >= last) break;
        if(str[first] == str[last]){
            first++;
            last--;
        }
        else{
            cnt = 0;
            break;
        }
    }
    printf("%d", cnt);
}