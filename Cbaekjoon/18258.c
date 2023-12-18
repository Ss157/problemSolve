#include <stdio.h>
#include <string.h>
 int arr[2000000], head = 0, tail = 0;
void push(int num){
    arr[tail] = num;
    tail++;
}

int empty(void){
    if((tail - head) == 0){
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
        int num = arr[head];
        head++;
        return num;
    }
}

int size(void){
    return tail - head;
}

int front(void){
    if(empty() == 1){
        return -1;
    }
    else{
        return arr[head];
    }
}

int back(void){
    if(empty() == 1){
        return -1;
    }
    else{
        return arr[tail - 1];
    }
}

int main(void){
    int N, K;
    char command[10];
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%s", command);

        if(strcmp(command, "push") == 0){
            scanf("%d", &K);
            push(K);
        }
        else if(strcmp(command, "pop") == 0){
            K = pop();
        }
        else if(strcmp(command, "size") == 0){
            K = size();
        }
        else if(strcmp(command, "empty") == 0){
            K = empty();
        }
        else if(strcmp(command, "front") == 0){
            K = front();
        }
        else if(strcmp(command, "back") == 0){
            K = back();
        }

        if(strcmp(command, "push") != 0){
            printf("%d\n", K);
        }
    }
}