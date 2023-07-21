#include <stdio.h>

int main(void){
    int TestCase;
    int r, e, c;
    scanf("%d", &TestCase);
    while(TestCase--){
        scanf("%d %d %d", &r, &e, &c);
        if(r < e - c){
            printf("advertise\n");
        }
        else if(r > e - c){
            printf("do not advertise\n");
        }
        else if(r == e - c){
            printf("does not matter\n");
        }
    }
}