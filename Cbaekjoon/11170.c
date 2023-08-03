#include <stdio.h>

int main(void){
    int TestCase;
    scanf("%d", &TestCase);
    while(TestCase--){
        int start_num, fi_num, cnt = 0;
        scanf("%d %d", &start_num, &fi_num);
        for(int i = start_num; i < fi_num + 1; i++){
            int temp = i;
            if(temp == 0) cnt++;
            while(temp > 0){
                if(temp % 10 == 0){
                    cnt++;
                }
                temp /= 10;
            }
        }
        printf("%d\n", cnt);
    }
}