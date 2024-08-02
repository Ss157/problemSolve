#include <stdio.h>
#include <stdlib.h>

int main(void){
    int length, q, stda = 0, stda_tmp, command, cnt = 0, end, k;
    int sum = 0, count = 0;
    int arr[200000];
    int prefix[200000];

    scanf("%d %d", &length, &q);
    for(int i = 0; i < length; i++){
        scanf("%d", &arr[i]);
    }
    prefix[0] = arr[0];
    for(int i = 1; i < length; i++){
        prefix[i] = prefix[i - 1] + arr[i];
    }
    for(int i = 0; i < length; i++){
        printf("%d ", prefix[i]);
    }
    printf("\n");
    for(int i = 0; i < q; i++){
        scanf("%d %d", &command, &k);
        if (command == 1)
        {
            stda -= k;
            // 1 - 3 = -2
            if(stda < 0){
                stda = stda + length;
            }
        }
        else if (command == 2)
        {
            stda += k;
            if(stda > length - 1){
                stda = stda - (length - 1);
            }
        }
        else if (command == 3)
        {
            stda_tmp = stda;
            scanf("%d", &end);
            k--, end--;
            stda += k;
            if(stda > length - 1){
                stda = stda - (length - 1);
            }
            // printf("%d ", prefix[i]);
                        // printf("---stat : %d %d\n", end, stda);

            end -= k;
            end += stda;
            printf("---stat : %d %d\n", end, stda);
            if(end > length - 1){
                end = end - (length - 1);
            }
            printf("---stat : %d %d\n", end, stda);
            if (end >= stda)
            {
                printf("=============%d %d %d\n", prefix[end], prefix[stda - 1], prefix[end] - prefix[stda - 1]);
            }
            else{
                printf("=============%d %d %d\n", prefix[end], prefix[length - 1] - prefix[stda - 1], prefix[length - 1] - prefix[stda - 1] + prefix[end]);
            }
            stda = stda_tmp;
        }
        printf("stat : %d\n", stda);
    }
}