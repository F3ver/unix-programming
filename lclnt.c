#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void setup();
int get_ticket();
int release_ticket();
void shut_down();

void do_regular_work()
{
    printf("SuperSleep version 1.0 Running -Licensed Software\n");
    sleep(10);
}

int main(int ac, char *av[])
{
    setup();
    if(get_ticket() != 0) exit(0);
    do_regular_work();

    release_ticket();
    shut_down();
    return 0;
}