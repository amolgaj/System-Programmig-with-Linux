#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
int main()
{
    signal(SIGINT, SIG_IGN);
    signal(SIGFPE, SIG_IGN);
    while (1)
    {
        printf("I AM INFINET LOOP AND WILL IGNORE SIGINT AND SIGFPG \n");
        sleep(2);
    }

    return 0;
}