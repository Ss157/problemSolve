#include <stdio.h>
#include <string.h>

int arr[10000] = {0};
int head = 5000;
int tail = 5001;
void push_front(int num){
    arr[head] = num;
    head--;
}

void push_back(int num){
    arr[tail] = num;
    tail++;
}

int pop_front(void){
    if(tail - head == 1){
        return -1;
    }
    else{
        int pop = arr[head + 1];
        arr[head + 1] = 0;
        head++;
        return pop;
    }
}

int pop_back(void){
    if(tail - head == 1){
        return -1;
    }
    else{
        int pop = arr[tail - 1];
        arr[tail - 1] = 0;
        tail--;
        return pop;
    }
}

int size(void){
    return tail - head - 1;
}

_Bool empty(void){
    if(tail - head == 1){
        return 1;
    }
    else{
        return 0;
    }
}

int front(void){
    if(tail - head == 1){
        return -1;
    }
    else{
        return arr[head + 1];
    }
}

int back(void){
    if(tail - head == 1){
        return -1;
    }
    else{
        return arr[tail - 1];
    }
}

int main(void){
    int TestCase;
    scanf("%d", &TestCase);

    while(TestCase--){
        char str[15];
        int num;
        scanf("%s", str);

        if(strcmp(str, "push_front") == 0){
            scanf("%d", &num);
            push_front(num);
        }
        else if(strcmp(str, "push_back") == 0){
            scanf("%d", &num);
            push_back(num);
        }
        else if(strcmp(str, "pop_front") == 0){
            printf("%d\n", pop_front());
        }
        else if(strcmp(str, "pop_back") == 0){
            printf("%d\n", pop_back());
        }
        else if(strcmp(str, "size") == 0){
            printf("%d\n", size());
        }
        else if(strcmp(str, "empty") == 0){
            printf("%d\n", empty());
        }
        else if(strcmp(str, "front") == 0){
            printf("%d\n", front());
        }
        else if(strcmp(str, "back") == 0){
            printf("%d\n", back());
        }
    }
}