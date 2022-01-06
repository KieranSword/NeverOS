#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#define bootmsg "Booting...\n"
void boot(){
    DIR *d;
    struct dirent *dir;
    d = opendir(".");
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            printf("%s\n", dir->d_name);
        }
        closedir(d);
    }
    printf("%s",bootmsg);
    system("clear");
}