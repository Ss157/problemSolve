#include <stdio.h>

int main(void){
    int people = 0, prize = 0;
    scanf("%d %d", &people, &prize);
    
    int score[people];
    for(int i = 0; i < people; i++){
        scanf("%d", &score[i]);
    }
    int temp = 0;
    for(int i = people - 1; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(score[j] < score[j + 1]){
                temp = score[j];
                score[j] = score[j + 1];
                score[j + 1] = temp;
            }
        }
    }
    printf("%d\n", score[prize-1]);
}