#include <stdio.h>
#include <string.h>
char str[100001] = {0};

void P(int index){
    char cha;
    scanf("%d", &cha);


}

void B(int index){

}

int L(int index){
    if(index != 0) index--;
    return index;
}

int D(int index, int len){
    if(index != len) index++;
    return index;
}

int main(void){
    char ch;
    int input;
    scanf("%s", str);
    scanf("%d", &input);
    int len = strlen(str);
    int index = len;
    while(input--){
        scanf("%c", &ch);
        if(ch == 'P'){
            P(index);
        }
        else if(ch == 'L'){
            index = L(index);
        }
        else if(ch == 'B'){
            B(index);
        }
        else if(ch == 'D'){
            index = D(index, len);
        }
        printf("%d\n", len);
    }
}