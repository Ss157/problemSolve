#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int start_time;
    int end_time;
} office_timeline;

int compare(const void *a, const void *b){
    office_timeline A = *(office_timeline *)a;
    office_timeline B = *(office_timeline *)b;
    if(A.end_time > B.end_time){
        return 1;
    }
    else if(A.end_time == B.end_time){
        if(A.start_time > B.start_time){
            return 1;
        }
        else{
            return -1;
        }
    }
    else{
        return 0;
    }
}
int main(void){
    office_timeline arr[100000];
    int N, cnt = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d %d", &arr[i].start_time, &arr[i].end_time);
    }

    qsort(arr, N, sizeof(office_timeline), compare);
   
    int tmp = 0;
    for(int i = 0; i < N; i++){
        if(tmp <= arr[i].start_time){
            cnt++;
            tmp = arr[i].end_time;
        }
    }
    printf("%d", cnt);
}