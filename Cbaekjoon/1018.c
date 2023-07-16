#include <stdio.h>

int main(void){
    int width, height;
    int minimum = 2500;
    int cnt = 0;
    scanf("%d %d", &width, &height);

    char arr[width][height + 1];
    for(int i = 0; i < width; i++){
        scanf("%s", arr[i]);
    }
    for(int i = 0; i <= width - 8; i++){
        for(int j = 0; j <= height - 8; j++){
            char ch = arr[i][j];
            char ch1 = 'B';
            if(ch == 'W'){
                ch1 = 'W';
            }

            cnt = 0;
            for(int g = i; g < i + 8; g++){
                for(int k = j; k < j + 8; k++){
                    if((g - i) % 2 == 0){
                        if((k - j) % 2 == 0 && !(arr[g][k] == ch1)){
                            cnt++;
                        }
                        else if((k - j) % 2 == 1 && arr[g][k] == ch1){
                            cnt++;
                        }
                    }
                    else if((g - i) % 2 == 1){
                        if((k - j) % 2 == 1 && !(arr[g][k] == ch1)){ 
                            cnt++;
                        }
                        else if((k - j) % 2 == 0 && arr[g][k] == ch1){
                            cnt++;
                        }
                    }
                }
            }
            if(minimum > cnt){
                minimum = cnt;
            }

            cnt = 0;
            for(int g = i; g < i + 8; g++){
                for(int k = j; k < j + 8; k++){
                    if((g - i) % 2 == 0){
                        if((k - j) % 2 == 0 && arr[g][k] == ch1){
                            cnt++;
                        }
                        else if((k - j) % 2 == 1 && !(arr[g][k] == ch1)){
                            cnt++;
                        }
                    }
                    else if((g - i) % 2 == 1){
                        if((k - j) % 2 == 1 && arr[g][k] == ch1){ 
                            cnt++;
                        }
                        else if((k - j) % 2 == 0 && !(arr[g][k] == ch1)){
                            cnt++;
                        }
                    }
                }
            }
            if(minimum > cnt){
                minimum = cnt;
            }
        }
    }
    printf("%d\n", minimum);
}