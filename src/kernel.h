#include <stdio.h>
#include <stdlib.h>
#define bootmsg "Booting...\n"
void boot()
{
    printf("%s",bootmsg);
    system("clear");
}