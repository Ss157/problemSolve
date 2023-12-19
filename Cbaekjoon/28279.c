#include <stdio.h>
int arr[2000000] = {0}, head = 1000000, tail = 1000000;
void push_front(int num){
    arr[head] = num;
    head--;
}

void push_back(int num){
    tail++;
    arr[tail] = num;
}

int empty(void){
    if(tail - head == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int pop_front(void){
    if(empty() == 1){
        return -1;
    }
    else{
        head++;
        return arr[head];
    }
}

int pop_back(void){
    if(empty() == 1){
        return -1;
    }
    else{
        return arr[tail--];
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
        return arr[head + 1];
    }
}

int back(void){
    if(empty() == 1){
        return -1;
    }
    else{
        return arr[tail];
    }
}

int main(void){
    int N, command, num;
    scanf("%d", &N);
    while(N--){
        scanf("%d", &command);
        if(command == 1){
            scanf("%d", &num);
            push_front(num);
        }
        else if(command == 2){
            scanf("%d", &num);
            push_back(num);
        }
        else if(command == 3){
            num = pop_front();
        }
        else if(command == 4){
            num = pop_back();
        }
        else if(command == 5){
            num = size();
        }
        else if(command == 6){
            num = empty();
        }
        else if(command == 7){
            num = front();
        }
        else if(command == 8){
            num = back();
        }
        if(command != 1 && command != 2){
            printf("%d\n", num);
        }
    }
}