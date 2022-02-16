#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void myhandler(int signum)
{
    switch (signum)
    {
    case SIGINT:
        printf("Hey, I got SIGINT: %d \n", signum);
        break;
    case 3:
        printf("Hey, I got SIGQUIT: %d \n", signum);
        break;
    case 20:
        printf("Hey, I got SIGTSTP: %d \n", signum);
        break;
    case 8:
        printf("Hey, I got SIGFPE: %d \n", signum);
        break;
    case 9:
        printf("Hey, I got SIGKILL: %d \n", signum);
        break;
    case 19:
        printf("Hey, I got SIGSTOP: %d \n", signum);
        break;
    }
}

int main()
{
    signal(SIGINT, myhandler);
    signal(SIGQUIT, myhandler);
    signal(SIGTSTP, myhandler);
    signal(SIGFPE, myhandler);
    signal(SIGKILL, myhandler);
    signal(SIGSTOP, myhandler);
    while (1)
    {
        printf("Hello I am in an infinite loop...\n");
        sleep(1);
    }
    return 0;
}