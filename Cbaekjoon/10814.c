#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int age;
    int index;
    char name[101];
}member;

member arr[100000];

int compare(const void *a, const void *b){
    member *age_a = (member *) a;
    member *age_b = (member *) b;
    if(age_a->age < age_b->age){
        return -1;
    }
    else if(age_a->age > age_b->age){
        return 1;
    }
    else{
        if(age_a->index < age_b->index){
            return -1;
        }
        else{
            return 1;
        }
    }
    return 0;
}

int main(void){
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d %s", &arr[i].age, arr[i].name);
        arr[i].index = i;
    }

    qsort(arr, N, sizeof(member), compare);
    
    for(int i = 0; i < N; i++){
        printf("%d %s\n", arr[i].age, arr[i].name);
    }
}