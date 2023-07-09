#include <stdio.h>

int main(void){
    int TestCase = 0;
    scanf("%d", &TestCase);

    int arr[TestCase];
    for(int i = 0; i < TestCase; i++){
        arr[i] = 0;
    }

    int len = 0;
    int input;
    for(int i = 0; i < TestCase; i++){
        scanf("%d", &input);
        if(input != 0){
            arr[len] = input;
            len++;
        }
        else if(input == 0){
            len--;
            arr[len] = input;
        }
    }

    int add = 0;
    for(int i = 0; i < TestCase; i++){
        add += arr[i];
    }
    printf("%d", add);
}