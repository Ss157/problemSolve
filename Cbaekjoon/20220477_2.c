#include <stdio.h>
#include <string.h>

int year, month, day = 0;
int visited[31];
int common_year[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int leap_year[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int cnt = 0; // 1�� ����
void calendar(void){
    printf("\n");
    printf("              %d�� %d��\n", year, month);
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
    printf("���� �Է��ϼ��� : ");
    scanf("%d", &year);
    printf("���� �Է��ϼ��� : ");
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
        printf("1. ���� �Է�    2. ���� ����    3. ���� Ȯ��    4. ����\n");
        printf("\n");
        printf("�޴��� �Է��ϼ��� : ");
        scanf("%d", &menu);
        if(menu == 4){
            break;
        }
        if(menu == 1){
            while (1)
            {
                printf("��¥�� �Է��ϼ��� : ");
                scanf("%d", &date);
                getchar();
                
                if(cnt == 1){
                    if(date > leap_year[month - 1]){
                        printf("�ش� ���� ���� ��¥�̴�.\n");
                        printf("\n");
                        continue;
                    }
                }
                else{
                    if(date > common_year[month - 1]){
                        printf("�ش� ���� ���� ��¥�̴�.\n");
                        printf("\n");
                        continue;
                    }
                }

                if(date == 0){
                    printf("\n");
                    printf("��¥�� 0�� �Է��Ͽ� �޴��� �����մϴ�.\n");
                    break;
                }
                else if(visited[date - 1] == 0){
                    printf("������ �Է��ϼ��� : ");
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
                    printf("������ �̹� �߰��Ǿ� �ִ� ��¥�Դϴ�.\n");
                    printf("\n");
                }
            }
        }
        else if(menu == 2){
            while (1)
            {
                printf("��¥�� �Է��ϼ��� : ");
                scanf("%d", &date);

                if(cnt == 1){
                    if(date > leap_year[month - 1]){
                        printf("�ش� ���� ���� ��¥�̴�.\n");
                        printf("\n");
                        continue;
                    }
                }
                else{
                    if(date > common_year[month - 1]){
                        printf("�ش� ���� ���� ��¥�̴�.\n");
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
                    printf("��¥�� 0�� �Է��Ͽ� �޴��� �����մϴ�.\n");
                    break;
                }
                else{
                    printf("\n");
                    printf("������ ���� ��¥�Դϴ�.\n");
                    printf("\n");
                }
            }
        }
        else if(menu == 3){
            while (1)
            {
                printf("��¥�� �Է��ϼ��� : ");
                scanf("%d", &date);

                if(cnt == 1){
                    if(date > leap_year[month - 1]){
                        printf("�ش� ���� ���� ��¥�̴�.\n");
                        printf("\n");
                        continue;
                    }
                }
                else{
                    if(date > common_year[month - 1]){
                        printf("�ش� ���� ���� ��¥�̴�.\n");
                        printf("\n");
                        continue;
                    }
                }

                if(visited[date - 1] == 1){
                    printf("%d�� %d�� %d�� ������ %s�Դϴ�.", year, month, date, schedule[date - 1]);
                    //system("clear");
                    break;
                }
                else if(date == 0){
                    printf("\n");
                    printf("��¥�� 0�� �Է��Ͽ� �޴��� �����մϴ�.\n");
                    break;
                }
                else{
                    printf("\n");
                    printf("������ ���� ��¥�Դϴ�.\n");
                    printf("\n");
                }
            }
        }
    }
}