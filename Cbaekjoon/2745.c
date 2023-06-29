#include <stdio.h>
#include <string.h>

int main(void){
    char string[10000];
    int base = 0;
    scanf("%s", string);
    scanf("%d", &base);

    int base10 = 0;
    int alpaToInte = 0;
    int cnt = 0;
    for(int i = strlen(string) - 1; i >= 0; i--){
        if(string[i] >= 'A' && string[i] <= 'Z'){
            alpaToInte = (int)string[i] - 55;
        }
        else alpaToInte = (int)string[i] - 48;
        for(int j = 0; j < cnt; j++){
            alpaToInte *= base;
        }
        cnt++;
        base10 += alpaToInte;
    }
    printf("%d", base10);
}