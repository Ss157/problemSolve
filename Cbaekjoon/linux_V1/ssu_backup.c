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
        printf("��� ���丮�� �����߽��ϴ�.\n");
    }
    // mkdir(dirname);

    int fd; // /home/backup/ssubak.log�� ���ٸ� ������
    if ((fd = open(fname, O_RDWR | O_APPEND | O_CREAT | O_EXCL, 0777)) < 0){
        fprintf(stderr, "open error for %s\n", fname);
    }

    // fclose(fnamefname);
    DIR            *dir_info;
    struct dirent  *dir_entry;
    dir_info = opendir( ".");              // ���� ���丮�� ����
    if ( NULL != dir_info)
    {
        while( dir_entry   = readdir( dir_info)){ // ���丮 �ȿ� �ִ� ��� ���ϰ� ���丮 ���
            printf( "%s\n", dir_entry->d_name);
        }
        closedir( dir_info);
    }
    if(!strcmp(argv[1], "backup")) {
        // printf("backup�� ���� �������� �ʾҴ�.\n");
        backup(argv[2], argv[3]);
    } else if(!strcmp(argv[1], "remove")) {
        printf("remove�� ���� �������� �ʾҴ�.\n");
        // remove();
    }	else if(!strcmp(argv[1], "recover")) {
        printf("recover�� ���� �������� �ʾҴ�.\n");
        // recover();
    }	else if(!strcmp(argv[1], "list")) {
        printf("list�� ���� �������� �ʾҴ�.\n");
        // list();
    }	else if(!strcmp(argv[1], "help")) {
        printf("help�� ���� �������� �ʾҴ�.\n");
        // help();
    }	else {
        if (strcmp(argv[1], ""))
        {
            fprintf(stderr, "ù ��° ���ڸ� �Է����� ���� ���α׷� ������ ����!\n");
            exit(1);
        }
        else{
            fprintf(stderr, "ù ��° ���ڷ� �߸��� ��ɾ �Է��� ���α׷� ������ ����!\n");
            exit(1);
        }
    }
    // if (argv[0])
    // {
    //     /* code */
    // }
    
}