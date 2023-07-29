#include <stdio.h>
#include <string.h>
char arr[10] = {0};
int num[10000] = {0};
int cnt = 0;
int first = 0;

void push(){
    int number = 0;
    scanf("%d", &number);
    num[cnt] = number;
    cnt++;
}

void pop(){
    if(cnt - first == 0){
        printf("-1\n");
    }
    else{
        printf("%d\n", num[first]);
        num[first] = 0;
        first++;
    }
}

void size(){
    printf("%d\n", cnt - first);
}

void empty(){
    if(cnt - first == 0){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
}

void front(){
    if(cnt - first == 0){
        printf("-1\n");
    }
    else{
        printf("%d\n", num[first]);
    }
}

void back(){
    if(cnt - first == 0){
        printf("-1\n");
    }
    else{
        printf("%d\n", num[cnt - 1]);
    }
}

int main(void){
    int input;
    scanf("%d", &input);

    while (input--){
        scanf("%s", arr);
        if(strcmp(arr,"push") == 0){
            push();
        }
        else if(strcmp(arr,"pop") == 0){
            pop();
        }
        else if(strcmp(arr,"size") == 0){
            size();
        }
        else if(strcmp(arr,"empty") == 0){
            empty();
        }
        else if(strcmp(arr,"front") == 0){
            front();
        }
        else if(strcmp(arr,"back") == 0){
            back();
        }
    }
}