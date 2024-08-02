#include "ssu_header.h"

void backup(char *path, char *option){
    char *resol_path;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("%02d%02d%02d%02d%02d%02d\n", tm.tm_year + 1900 - 2000, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
    // if (path[0] != '/') //상대경로
    // {
    //     strcpy
    // }
    realpath(path, resol_path);
    if(resol_path == NULL){
        printf("절대경로로 바꾸는데 에러!\n");
    }
    printf("%s\n", resol_path);
}