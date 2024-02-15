#include <stdio.h>
#include <string.h>
char word[1000000];
int cnt0, cnt1;
int main(void){
    scanf("%s", word);
    int len = strlen(word);
    
    
    if (word[0] == 49)
    {
        cnt1++;
    }
    else
    {
        cnt0++;
    }
    
    
    for (int i = 1; i < len; i++)
    {
        if(word[i] != word[i - 1])
        {
            if (word[i] == 49)
            {
                cnt1++;
            }
            else
            {
                cnt0++;
            }
        }
    }
    if (cnt1 <= cnt0)
    {
        printf("%d", cnt1);
    }
    else
    {
        printf("%d", cnt0);
    }
}