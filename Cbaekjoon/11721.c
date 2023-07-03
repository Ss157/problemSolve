#include <stdio.h>
#include <string.h>

int main(void){
    char word[100];
    scanf("%s", word);
    
    int len = strlen(word);
    int cnt = 0;
    while (len--){
        if(cnt % 10 == 0 && cnt != 0) printf("\n");
        printf("%c", word[cnt]);
        cnt++;
    }
}