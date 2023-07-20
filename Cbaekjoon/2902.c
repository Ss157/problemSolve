#include <stdio.h>
#include <string.h>

int main(void){
    char ch1[101] = {'0'};
    char ch2[100] = {'0'};
    scanf("%s", ch1);
    ch2[0] = ch1[0];
    int k = 1;
    int len = strlen(ch1);
    for(int i = 1; i < len; i++){
        if(ch1[i] == 45){
            ch2[k] = ch1[i + 1];
            k++;
        }
    }
    int leng = strlen(ch2);
    for(int i = 0; i < leng; i++){
        printf("%c", ch2[i]);
    }
}