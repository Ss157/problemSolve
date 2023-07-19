#include <stdio.h>

int main(void){
    int TestCase, westsite, eastsite;
    long long cnt = 1;
    scanf("%d", &TestCase);

    while(TestCase--){
        scanf("%d %d", &westsite, &eastsite);
        cnt = 1;
        if(eastsite / 2 < westsite){
            westsite = eastsite - westsite;
        }
        
        int temp = westsite;
        while(temp--){
            cnt *= eastsite;
            eastsite--;
        }
        for(int i = 1; i <= westsite; i++){
            cnt /= i;
        }
        printf("%lld\n", cnt);
    }
}