#include <stdio.h>

int main(void){
    int repeatnum = 0;
    int startNum = 2;
    int temp = 0;
    scanf("%d", &repeatnum);
    for(int i = 0; i < repeatnum; i++){
        temp = startNum + (startNum - 1);
        startNum = temp;
    }
    printf("%d", temp*temp);
}