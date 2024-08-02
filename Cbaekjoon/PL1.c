#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 1024
char line[SIZE];
int x = 0, y = 0, z = 0;
int value = 0;
int dec_num;
char *tmp;
char *nextToken;
char output[100][2] = {0};
char input[100][100] = {0};
int input_idx = 0;
int output_idx = 0;
int cnt_var;

void NextToken()
{
    nextToken = strtok(line, " ");
    strcpy(input[input_idx], nextToken);
    while(nextToken != NULL)
    {
        printf("%d input[input_idx] : %s __ %s\n", input_idx, input[input_idx], nextToken);
        nextToken = strtok(NULL, " ");
        strcpy(input[++input_idx], nextToken);
        printf("%d input[input_idx] : %s __ %s\n", input_idx, input[input_idx], nextToken);
    }
    printf("zzz");
}

/* int NextToken()
{
    nextToken = strtok(line, " ");
    printf("1 nextToken : %s\n", nextToken);
    while(nextToken != NULL)
    {
        printf("nextToken : %s\n", nextToken);
        nextToken = strtok(NULL, " ");
    }
} */

void error(){
    printf("syntax error!!\n");
}

void var()
{
    printf("var in\n");
    if(!strcmp(nextToken, "x"))
    {
        cnt_var = 1;
    }
    else if(!strcmp(nextToken, "y"))
    {
        cnt_var = 2;
    }
    else if(!strcmp(nextToken, "z"))
    {
        cnt_var = 3;
    }
    else{
        error();
    }
}

void dec()
{
    
}

void number()
{
    while(1)
    {
        dec();
    }
}

void factor()
{
    number();
}

void aexpr()
{

}

void relop()
{

}

void bexpr()
{
    printf("bexpr in\n");
    if(isdigit(tmp))
    {
        number();
    }
    else{
        error();
    }

    number();
    printf("bexpr out\n");
}

void expr()
{
    printf("expr in\n");
    strcpy(tmp, nextToken);
    NextToken();
    if(!strcmp(nextToken, "==") || !strcmp(nextToken, "!=")  || !strcmp(nextToken, "<") || !strcmp(nextToken, ">") || !strcmp(nextToken, "<=") || !strcmp(nextToken, ">="))
    {
        bexpr();
    }
    else
    {
        aexpr();
    }
    printf("expr out\n");
}

void statement()
{
    printf("statement in\n");
    if(!strcmp(nextToken, "print"))
    {
        var();
        NextToken();
        if(strcmp(nextToken, ";"))
        {
            error();
        }
        expr();
    }
    else
    {
        var();
        NextToken();
        if(strcmp(nextToken, "="))
        {
            error();
        }
        expr();
    }
    printf("statement out\n");
}

void program()
{
    printf("program in\n");
    while(1)
    {
        NextToken();
        if(nextToken == NULL)
        {
            break;
        }
        statement();
    }
    printf("program out\n");
}

int main(void)
{
    while(1)
    {
        output_idx = 0;
        printf(">> ");
        fgets(line, SIZE, stdin);
        printf("line : %s", line);
        if(!strcmp("terminate\n", line))
        {
            printf("터미네이트로 죽음\n");
            break;
        }
        //while(1){
            printf("kkk");
        NextToken();
        //}
        printf("ddd");
        for(int i = 0; i < input_idx; i++)
        {
        printf("%d input[input_idx] : --%s--\n", i, input[input_idx]);
        }
        //program();
    }
}