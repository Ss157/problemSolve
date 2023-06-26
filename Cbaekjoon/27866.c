#include <stdio.h>

int main(void){
    char str[1000];
    scanf("%s", str);
    int index;
    scanf("%d", &index);
    printf("%c", str[index - 1]);
}