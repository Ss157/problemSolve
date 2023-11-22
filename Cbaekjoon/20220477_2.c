#include <stdio.h>
#include <string.h>

int year, month, day = 0;
int visited[31];
int common_year[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int leap_year[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int cnt = 0; // 1은 윤년
void calendar(void){
    printf("\n");
    printf("              %d년 %d월\n", year, month);
    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
    for(int i = 0; i < day; i++){
        printf("     ");
    }
    if(cnt){
        for(int i = 1; i < leap_year[month - 1] + 1; i++){
            if(i < 10){
                if(visited[i - 1] == 0){
                    for(int j = 0; j < 4; j++){
                        printf(" ");
                    }
                }
                else if(visited[i - 1] == 1){
                    for(int j = 0; j < 3; j++){
                        printf(" ");
                    }
                    printf("*");
                }
            }
            else{
                if(visited[i - 1] == 0){
                    for(int j = 0; j < 3; j++){
                        printf(" ");
                    }
                }
                else if(visited[i - 1] == 1){
                    for(int j = 0; j < 2; j++){
                        printf(" ");
                    }
                    printf("*");
                }
            }
            printf("%d", i);
            if((i + day) % 7 == 0){
                printf("\n");
            }
        }
    }
    else{
        for(int i = 1; i < common_year[month - 1] + 1; i++){
            if(i < 10){
                if(visited[i - 1] == 0){
                    for(int j = 0; j < 4; j++){
                        printf(" ");
                    }
                }
                else if(visited[i - 1] == 1){
                    for(int j = 0; j < 3; j++){
                        printf(" ");
                    }
                    printf("*");
                }
            }
            else{
                if(visited[i - 1] == 0){
                    for(int j = 0; j < 3; j++){
                        printf(" ");
                    }
                }
                else if(visited[i - 1] == 1){
                    for(int j = 0; j < 2; j++){
                        printf(" ");
                    }
                    printf("*");
                }
            }
            printf("%d", i);
            if((i + day) % 7 == 0){
                printf("\n");
            }
        }
    }
}
int main(void){
    printf("년을 입력하세요 : ");
    scanf("%d", &year);
    printf("월을 입력하세요 : ");
    scanf("%d", &month);
    //system("clear");

    int result, temp = 0;
    for(int i = 1; i < year; i++){
        result = (i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0);
        if(result == 1)
            temp += 366;
        else
            temp += 365;
    }

    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                cnt = 1;
            }
        }
        else{
            cnt = 1;
        }
    }
    if(cnt){
        for(int i = 1; i < month; i++){
            day += leap_year[i - 1];
        }
    }
    else{
        for(int i = 1; i < month; i++){
            day += common_year[i - 1];
        }
    }
    day += temp;
    day++;
    day %= 7;

    int menu;
    int date;
    char schedule[31][10000] = {0};
    char to_do_list[10000];
    while(1){
        printf("\n");
        calendar();
        printf("\n");
        printf("\n");
        printf("1. 일정 입력    2. 일정 삭제    3. 일정 확인    4. 종료\n");
        printf("\n");
        printf("메뉴를 입력하세요 : ");
        scanf("%d", &menu);
        if(menu == 4){
            break;
        }
        if(menu == 1){
            while (1)
            {
                printf("날짜를 입력하세요 : ");
                scanf("%d", &date);
                getchar();
                
                if(cnt == 1){
                    if(date > leap_year[month - 1]){
                        printf("해당 월에 없는 날짜이다.\n");
                        printf("\n");
                        continue;
                    }
                }
                else{
                    if(date > common_year[month - 1]){
                        printf("해당 월에 없는 날짜이다.\n");
                        printf("\n");
                        continue;
                    }
                }

                if(date == 0){
                    printf("\n");
                    printf("날짜에 0을 입력하여 메뉴로 복귀합니다.\n");
                    break;
                }
                else if(visited[date - 1] == 0){
                    printf("일정을 입력하세요 : ");
                    scanf("%[^\n]s", &to_do_list);
                    strcpy(schedule[date - 1], to_do_list);
                    visited[date - 1] = 1;
                    for(int i = 1; i < 31; i++){
                        printf("%d %s\n", i, schedule[i - 1]);
                    }
                    //system("clear");
                    break;
                }
                else{
                    printf("\n");
                    printf("일정이 이미 추가되어 있는 날짜입니다.\n");
                    printf("\n");
                }
            }
        }
        else if(menu == 2){
            while (1)
            {
                printf("날짜를 입력하세요 : ");
                scanf("%d", &date);

                if(cnt == 1){
                    if(date > leap_year[month - 1]){
                        printf("해당 월에 없는 날짜이다.\n");
                        printf("\n");
                        continue;
                    }
                }
                else{
                    if(date > common_year[month - 1]){
                        printf("해당 월에 없는 날짜이다.\n");
                        printf("\n");
                        continue;
                    }
                }

                if(visited[date - 1] == 1){
                    visited[date - 1] = 0;
                    strcpy(schedule[date - 1], "\0");
                    //system("clear");
                    break;
                }
                else if(date == 0){
                    printf("\n");
                    printf("날짜에 0을 입력하여 메뉴로 복귀합니다.\n");
                    break;
                }
                else{
                    printf("\n");
                    printf("일정이 없는 날짜입니다.\n");
                    printf("\n");
                }
            }
        }
        else if(menu == 3){
            while (1)
            {
                printf("날짜를 입력하세요 : ");
                scanf("%d", &date);

                if(cnt == 1){
                    if(date > leap_year[month - 1]){
                        printf("해당 월에 없는 날짜이다.\n");
                        printf("\n");
                        continue;
                    }
                }
                else{
                    if(date > common_year[month - 1]){
                        printf("해당 월에 없는 날짜이다.\n");
                        printf("\n");
                        continue;
                    }
                }

                if(visited[date - 1] == 1){
                    printf("%d년 %d월 %d일 일정은 %s입니다.", year, month, date, schedule[date - 1]);
                    //system("clear");
                    break;
                }
                else if(date == 0){
                    printf("\n");
                    printf("날짜에 0을 입력하여 메뉴로 복귀합니다.\n");
                    break;
                }
                else{
                    printf("\n");
                    printf("일정이 없는 날짜입니다.\n");
                    printf("\n");
                }
            }
        }
    }
}