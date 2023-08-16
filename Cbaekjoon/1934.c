#include <stdio.h>

int main(void){
    int TestCase;
    scanf("%d", &TestCase);
    int num1, num2;
    while(TestCase--){
        scanf("%d %d", &num1, &num2);
        int mutip = num1 * num2;
        while(num1 != num2){
            if(num1 > num2){
                num1 -= num2;
            }
            else{
                num2 -= num1;
            }
        }
        printf("%d", mutip / num1);
    }
}