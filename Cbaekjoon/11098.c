#include <stdio.h>
#include <string.h>

int main(void){
    int TestCase;
    scanf("%d", &TestCase);
    while (TestCase--)
    {
        int p;
        scanf("%d", &p);
        char arr[21] = {0};
        char temparr[21] = {0};
        int money = 0;
        int max_money = 0;
        while(p--){
            scanf("%d", &money);
            scanf("%s", arr);

            if(money > max_money){
                max_money = money;
                strcpy(temparr, arr);
            }
        }
        printf("%s\n", temparr);
    }
}