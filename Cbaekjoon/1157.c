#include <stdio.h>
#include <string.h>

int main(void){
    char word[1000000];
    scanf("%s", word);

    int alphabet[26] = {0};

    int len = strlen(word);
    for(int i = 0; i < len; i++){
        if(word[i] >= 'A' && word[i] <= 'Z'){
            alphabet[word[i] - 65]++;
        }
        else if(word[i] >= 'a' && word[i] <= 'z'){
            alphabet[word[i] - 97]++;
        }
    }

    int max = 0;
    int maxindex = 0;
    for(int i = 0; i < 26; i++){
        if(alphabet[i] > max){
            max = alphabet[i];
            maxindex = i;
        }
    }

    int cnt = 0;
    for(int i = 0; i < 26; i++){
        if(alphabet[i] == max) cnt++;
    }

    if(cnt > 1) printf("?");
    else printf("%c", (char)(maxindex + 65));
}