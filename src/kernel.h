#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
char bootmsg[256] = "Booting...\n";
void boot()
{
    printf(bootmsg);
    Beep(500, 1000);
    Sleep(1000);
    Beep(600, 1000);
    Sleep(1000);
    Beep(700, 1000);
    Sleep(1000);
    system("clear");
}