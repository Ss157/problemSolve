#include <stdio.h>

int main(void){
    char ch;
    int cnt = 0;
    while(1){
        ch = getchar();
        if(!(ch >= 'A' && ch <='Z')) break;
        if(ch == 'A' || ch == 'B' || ch == 'C') cnt += 3;
        else if(ch == 'D' || ch == 'E' || ch == 'F') cnt += 4;
        else if(ch == 'G' || ch == 'H' || ch == 'I') cnt += 5;
        else if(ch == 'J' || ch == 'K' || ch == 'L') cnt += 6;
        else if(ch == 'M' || ch == 'N' || ch == 'O') cnt += 7;
        else if(ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S') cnt += 8;
        else if(ch == 'T' || ch == 'U' || ch == 'V') cnt += 9;
        else if(ch == 'W' || ch == 'X' || ch == 'Y' || ch == 'Z') cnt += 10;
        printf("%d\n", cnt);
    }
    printf("%d\n", cnt);
}