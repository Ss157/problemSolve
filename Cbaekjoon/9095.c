#include <stdio.h>

int main(void){
    int T, num, arr[11] = {1, 2, 4};
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &num);
        for(int i = 3; i < num; i++){
            arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
        }
        printf("%d\n", arr[num - 1]);
    }
}