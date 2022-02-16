#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void myhandler(int signum)
{
    printf("Hey i got a signal \n ",signum);
}

int main()
{
    signal(SIGINT, &myhandler);
    while (1)
    {
        printf("Hello I am Infinite \n");
        sleep(2);
    }

    return 0;
}