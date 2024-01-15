#include <stdio.h>
int index, arr_input[100000] = {0}, stack[100000], arr[100000] = {0};
char arr_output[1000000] = {0};
int idx_stack = 0;
void push(int num){
    stack[idx_stack++] = num;
}

void pop(void){
    idx_stack--;
}

int main(void){ 
    int N = 0, cnt = 0, idx_input = 0, idx_output = 0; 
    scanf("%d", &N); 
    for(int i = 0; i < N; i++){ 
        scanf("%d", &arr_input[i]); 
    }
    for(int i = 0; i < N; i++){ 
        arr[i] = i + 1;
    }

    int i = 0;
    while(1){
        if(idx_input == N && idx_stack == 0){
            cnt = 1;
            break;
        }
        if(idx_input == N && idx_stack != 0){
            break;
        }
        if(cnt == -1){
            break;
        }
        
        while(1){
            if(arr_input[idx_input] == stack[idx_stack - 1] && idx_stack != 0){
                pop();
                arr_output[idx_output++] = '-';
                break;
            }
            else if(arr_input[idx_input] >= arr[i]){
                push(arr[i++]);
                arr_output[idx_output++] = '+';
            }
            else{
                cnt = -1;
                break;
            }
            if(i > N){
                cnt = -1;
                break;
            }
        }
        idx_input++;
    }

    if(cnt == 1){
        for(int i = 0; i < idx_output; i++){
            printf("%c\n", arr_output[i]);
        }
    }
    else{
        printf("NO");
    }
}