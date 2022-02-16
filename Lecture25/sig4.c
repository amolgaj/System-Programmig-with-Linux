#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
int main()
{
    pid_t cpid = fork();
    if (cpid == 0)
    {
        for (;;)
        {
            printf("I am a child in infinte loop \n");
            sleep(1);
        }
    }
    else
    {
        sleep(10);
        kill(cpid, SIGSEGV);
        printf("I am parent and kill (Stop) my child  after 10 sec..... Bye  Bye \n");
        exit(0);
    }

    return 0;
}