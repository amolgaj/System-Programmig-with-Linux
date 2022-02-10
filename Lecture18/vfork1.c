#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    pid_t cpid = vfork();
    if (cpid == 0)
    {
        sleep(1);
        printf("Hello i am child \n");
        sleep(2);
        printf("Hello i am child......I am exiting \n");
        sleep(2);
        exit(0);
    }
    else
    {
        printf("hello i am parent...i am exiting \n");
        exit(0);
    }

    return 0;
}