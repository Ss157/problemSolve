#include <stdio.h>
int idx = 0, arr[1000] = {0};

void push(int num){
    arr[idx++] = num;
}

int pop(void){
    idx--;
}

int main(void){
    int N, num = 1, input[1000] = {0};
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &input[i]);
    }
    int i = 0;
    int cnt = 0;
    while(1){
        if(num == N){
            cnt = 1;
            break;
        }

        if(input[i] != num){
            if(arr[idx - 1] == num){
                pop();
                num++;
            }
            else{
                if(i == N){
                    break;
                }
                push(input[i]);
                i++;
            }
        }
        else if(input[i] == num){
            num++;
            i++;
        }
    }
    if(cnt == 1){
        printf("Nice\n");
    }
    else{
        printf("Sad\n");
    }
}