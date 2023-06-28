#include <stdio.h>
#include <string.h>

int main(void){
    char SubjectName[51];
    double credit = 0.0;
    double CreditAdd = 0.0;
    char score[3];
    double ScoreAdd = 0.0;
    for(int i = 0; i < 20; i++){
        scanf("%s", SubjectName);
        scanf("%lf", &credit);
        CreditAdd += credit;
        scanf("%s", score);
        if(score[0] == 'P') CreditAdd -= credit;
        if(strcmp(score, "A+") == 0){
            ScoreAdd += 4.5 * credit;
        }
        else if(strcmp(score, "A0") == 0){
            ScoreAdd += 4.0 * credit;
        }
        else if(strcmp(score, "B+") == 0){
            ScoreAdd += 3.5 * credit;
        }
        else if(strcmp(score, "B0") == 0){
            ScoreAdd += 3.0 * credit;
        }
        else if(strcmp(score, "C+") == 0){
            ScoreAdd += 2.5 * credit;
        }
        else if(strcmp(score, "C0") == 0){
            ScoreAdd += 2.0 * credit;
        }
        else if(strcmp(score, "D+") == 0){
            ScoreAdd += 1.5 * credit;
        }
        else if(strcmp(score, "D0") == 0){
            ScoreAdd += 1.0 * credit;
        }
        printf("ScoreAdd : %lf\n", ScoreAdd);
    }
    printf("CreditAdd : %lf\n", CreditAdd);
    printf("%lf\n", ScoreAdd/CreditAdd);
}