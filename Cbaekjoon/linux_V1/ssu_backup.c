#include "ssu_header.h"
// #import 
int main(int argc, char *argv[]){
    char *dirname = "/home/backup";
    char *fname = "/home/backup/ssubak.log";

    printf("\n%d\n", argc);

    struct stat st = {0};
    if (stat(dirname, &st) == -1) {
        mkdir("/home");
        mkdir(dirname);
        printf("백업 디렉토리를 생성했습니다.\n");
    }
    // mkdir(dirname);

    int fd; // /home/backup/ssubak.log가 없다면 생성함
    if ((fd = open(fname, O_RDWR | O_APPEND | O_CREAT | O_EXCL, 0777)) < 0){
        fprintf(stderr, "open error for %s\n", fname);
    }

    // fclose(fnamefname);
    DIR            *dir_info;
    struct dirent  *dir_entry;
    dir_info = opendir( ".");              // 현재 디렉토리를 열기
    if ( NULL != dir_info)
    {
        while( dir_entry   = readdir( dir_info)){ // 디렉토리 안에 있는 모든 파일과 디렉토리 출력
            printf( "%s\n", dir_entry->d_name);
        }
        closedir( dir_info);
    }
    if(!strcmp(argv[1], "backup")) {
        // printf("backup는 아직 구현되지 않았다.\n");
        backup(argv[2], argv[3]);
    } else if(!strcmp(argv[1], "remove")) {
        printf("remove는 아직 구현되지 않았다.\n");
        // remove();
    }	else if(!strcmp(argv[1], "recover")) {
        printf("recover는 아직 구현되지 않았다.\n");
        // recover();
    }	else if(!strcmp(argv[1], "list")) {
        printf("list는 아직 구현되지 않았다.\n");
        // list();
    }	else if(!strcmp(argv[1], "help")) {
        printf("help는 아직 구현되지 않았다.\n");
        // help();
    }	else {
        if (strcmp(argv[1], ""))
        {
            fprintf(stderr, "첫 번째 인자를 입력하지 않음 프로그램 비정상 종료!\n");
            exit(1);
        }
        else{
            fprintf(stderr, "첫 번째 인자로 잘못된 명령어를 입력함 프로그램 비정상 종료!\n");
            exit(1);
        }
    }
    // if (argv[0])
    // {
    //     /* code */
    // }
    
}