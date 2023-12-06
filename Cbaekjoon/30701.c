#include <stdio.h>
#include <stdlib.h>
int compare(const void *a , const void *b) 
{ 
     if( *(int*)a > *(int*)b )

        return 1;

    else if( *(int*)a < *(int*)b )

        return -1;

    else

        return 0;
} 

int main(void){
    
    int N, D, arr1[100000] = {0}, arr2[100000] = {0}, cnt = 0;
    scanf("%d %d", &N, &D);
    int tmp, count = 0;
    for(int i = 0; i < N; i++){
        scanf("%d", &tmp);
        if(tmp == 1){
            scanf("%d", &arr1[i - count]);
        }
        else{
            scanf("%d", &arr2[count]);
            count++;
        }
    }
    
    int size1 = N - 1 - count;
    int size2 = count - 1;
    qsort(arr1, size1, sizeof(arr1[0]) , compare); 
    qsort(arr2, size2, sizeof(arr2[0]) , compare);

    int i = 0, j = 0;
    while(1){
        if(N == i + j){
            printf("111");
            break;
        }
        while(1){
            if(D <= arr1[i] && count > j){
                D *= arr2[j];
                j++;
                cnt++;
            }
            else{
                break;
            }
        }
        if(D > arr1[i]){
            D += arr1[i];
            i++;
            cnt++;
        }
        else{
            break;
        }
    }
    // for(int i = 0; i < N - count; i++){
    //     printf("%d\n", arr1[i]);
    // }
    // for(int i = 0; i < count; i++){
    //     printf("%d\n", arr2[i]);
    // }


    //  printf("%d %d         ", i, j);
   
    printf("%d", cnt);
}