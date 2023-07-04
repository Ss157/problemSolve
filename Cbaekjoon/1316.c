#include <stdio.h>
#include <string.h>

int main(void){
    int TestCase = 0;
    scanf("%d", &TestCase);
    int cnt = 0;
    while (TestCase--){
        char word[100] = {'\0'};
        scanf("%s", word);
        int len = strlen(word);
        char copyarr[len];
        copyarr[0] = word[0];
        int k = 1;
        int breaking = 1;
        for(int i = 1; i < len; i++){
            if(breaking == 0) break;
            for(int j = 0; j < k; j++){
                if(j == k - 1 && word[i] != copyarr[j]){
                    copyarr[j + 1] = word[i];
                    k++;
                }
                else if(j != k - 1 && word[i] == copyarr[j]){
                    breaking = 0;
                    break;
                }
            }
        }
        if(breaking == 1) cnt++;
    }
    printf("%d\n", cnt);
}