#include <stdio.h>
int num, arr[50], arr_idx = 0, sum = 0, tmp = 0;
char op;
int main(void){
    scanf("%d", &num);
    tmp += num;
    while(1){
        scanf("%c", &op);
        if(op == '\n'){
            arr[arr_idx++] = tmp;
            break;
        }
        scanf("%d", &num);

        if(op == '+'){
            tmp += num;
        }
        else if(op == '-'){
            arr[arr_idx++] = tmp;
            tmp = 0;
            tmp += num;
        }
    }
    sum = arr[0];
    for (int i = 1; i < arr_idx; i++)
    {
        sum -= arr[i];
    }
    printf("%d", sum);
}