#include <stdio.h>
#include <string.h>

int main(void){
    int WordsCount = 0;
    scanf("%d", &WordsCount);
    char words[WordsCount][51];
    for(int i = 0; i < WordsCount; i++){
        scanf("%s", words[i]);
    }

    int len = strlen(words[0]);

    for(int i = 0; i < len; i++){
        for(int j = 0; j < WordsCount - 1; j++){
            char ch1 = words[j][i];
            char ch2 = words[j + 1][i];
            if(!(ch1 == ch2)){
                words[0][i] = '?'; 
                break;
            }
        }
    }

    printf("%s", words[0]);
}