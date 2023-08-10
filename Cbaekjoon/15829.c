#include <stdio.h>
#define M 1234567891

int main(void){
    int str_length;
    scanf("%d", &str_length);

    char str[str_length + 1];
    scanf("%s", str);

    long long cnt = 0, R = 1;
    for (int i = 0; i < str_length; i++){
		cnt = (cnt + (str[i] - 'a' + 1) * R) % M;
		R = (R * 31) % M;
	}
    printf("%lld\n", cnt);
}