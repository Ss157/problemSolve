#include <stdio.h>
int arr[1000000] = {0};
int index = 0;

void push(int num){
    arr[index] = num;
    index++;
}

int empty(void){
    if(index == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int pop(void){
    if(empty() == 1){
        return -1;
    }
    else{
        index--;
        return arr[index];
    }
}

int num_cnt(void){
    return index;
}

int top(void){
    if(index == 0){
        return -1;
    }
    else{
        int tmp = index - 1;
        return arr[tmp];
    }
}
int main(void){
    int N, A, num;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &A);
        if(A == 1){
            scanf("%d", &num);
            push(num);
        }
        else if(A == 2){
            num = pop();
            printf("%d\n", num);
        }
        else if(A == 3){
            num = num_cnt();
            printf("%d\n", num);
        }
        else if(A == 4){
            num = empty();
            printf("%d\n", num);
        }
        else{
            num = top();
            printf("%d\n", num);
        }
    }
}