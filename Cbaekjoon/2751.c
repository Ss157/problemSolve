#include <stdio.h>
#include <stdlib.h>
int arr[1000000] = {0};
int compare(const void *a, const void *b){
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 < num2)
        return -1;

    if (num1 > num2)
        return 1;

    return 0;
}

int main(void){
    int input;
    scanf("%d", &input);
    for(int i = 0; i < input; i++){
        scanf("%d", &arr[i]);
    }

    qsort(arr, input, sizeof(int), compare);
    for(int i = 0; i < input; i++){
        printf("%d\n", arr[i]);
    }
}