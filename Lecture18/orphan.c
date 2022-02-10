#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    pid_t cpid = fork();

    if (cpid == 0)
    {
        printf("the child pid = %ld amd ppid = %ld  \n", (long)getpid(), (long)getppid());
        while (1)
            ;
    }

    else
    {
        printf("the parent pid = %ld amd ppid = %ld  \n", (long)getpid(), (long)getppid());
        exit(0);
    }

    return 0;
}