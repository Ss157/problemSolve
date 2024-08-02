#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <dirent.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <errno.h>
#include <limits.h>

char *commanddata[10]={
    "backup",
    "remove",
    "recover",
    "list",
    "help"
};
// struct time_set{
//     int time_sec;
//     int time_min;
//     int time_hour;
//     int time_mday;
//     int time_mon;
//     int time_year;
//     // int time_wday;
//     // int time_yday;
//     // int time_isdst;
// };
