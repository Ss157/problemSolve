#include <stdio.h>
#include <string.h>

int arr[1001][1001] = {0}, len1, len2;
char str1[1001] = {0}, str2[1001] = {0};
int main(void){
    scanf("%s", str1);
    scanf("%s", str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    
    for(int i = 1; i < len1 + 1; i++){
        for(int j = 1; j < len2 + 1; j++){
            if(str1[i - 1] == str2[j - 1]){
                arr[i][j] = arr[i - 1][j - 1] + 1;
            }
            else{
                if(arr[i - 1][j] >= arr[i][j - 1]){
                    arr[i][j] = arr[i - 1][j];
                }
                else{
                    arr[i][j] = arr[i][j - 1];
                }
            }
        }
    }

    printf("%d", arr[len1][len2]);
}