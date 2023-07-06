#include <stdio.h>

int main(void){
    int card = 0, number = 0;
    scanf("%d %d", &card, &number);

    int arr[card];
    for(int i = 0; i < card; i++){
        scanf("%d", &arr[i]);
    }
    int max = 0;
    int temp = 0;
    for(int i = 0; i < card; i++){
        for(int j = 0; j < card; j++){
            for(int k = 0; k < card; k++){
                if(i == j || i == k || j == k) continue;
                temp = arr[i] + arr[j] + arr[k];
                if((temp <= number) && (temp > max)){
                    max = temp;
                }
            }
        }
    }
    printf("%d", max);
}