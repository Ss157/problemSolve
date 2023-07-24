#include <stdio.h>
#include <string.h>
int cnt = 0;
int recursion(const char *s, int l, int r){
    cnt++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}
int main(void){
    int TestCase;
    scanf("%d", &TestCase);
    char str[1001] = {0};
    while(TestCase--){
        cnt = 0;
        scanf("%s", str);
        int len = strlen(str);
        int tf = recursion(str, 0, len - 1);
        printf("%d %d\n", tf, cnt);
    }
}