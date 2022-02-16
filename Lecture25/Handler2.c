#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void myhandler_SIGINT(int signum)
{
    printf("Hey i got a signal SIGINT %d \n ",signum);
    signal(SIGINT,SIG_DFL);
}

void myhandler_SIGQUIT(int signum)
{
    printf("Hey i got a signal SIGQUIT %d \n ",signum);
    signal(SIGQUIT,SIG_DFL);
    
}

void myhandler_SIGTSTP(int signum)
{
    printf("Hey i got a signal SIGTSTP %d \n ",signum);
    signal(SIGTSTP,SIG_DFL);
}

int main()
{
    signal(SIGINT, &myhandler_SIGINT);
    signal(SIGQUIT, &myhandler_SIGQUIT);
    signal(SIGTSTP, &myhandler_SIGTSTP);
    while (1)
    {
        printf("Hello I am Infinite \n");
        sleep(2);
    }

    return 0;
}