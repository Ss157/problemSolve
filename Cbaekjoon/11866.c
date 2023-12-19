#include <stdio.h>
int arr[3000000] = {0}, head = 0, tail;
void push(int num){
    arr[tail] = num;
    tail++;
}

int pop(void){
    int num = arr[head];
    head++;
    return num;
}

int size(void){
    return tail - head;
}

int main(void){
    int N, K;
    scanf("%d %d", &N, &K);
    tail = N;
    for(int i = 0; i < N; i++){
        arr[i] = i + 1;
    }
    printf("<");
    while(1){
        if(size() == 1){
            break;
        }

        for(int i = 0; i < K - 1; i++){
            push(pop());
        }
        int tmp = pop();
        printf("%d, ", tmp);
    }
    int tmp = pop();
    printf("%d", tmp);
    printf(">");
}