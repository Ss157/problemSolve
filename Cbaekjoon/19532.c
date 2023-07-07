#include <stdio.h>

int main(void){
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    int x = 0, y = 0;
    int cnt = 0;
    for(int i = -999; i < 1000; i++){
        if(cnt) break;
        for(int j = -999; j < 1000; j++){
            if(cnt) break;
            if(a * i + b * j == c){
                if(d * i + e * j == f){
                    cnt = 1;
                    x = i;
                    y = j;
                }
            }
        }
    }
    printf("%d %d", x, y);
}