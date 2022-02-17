#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#define SIZE 1024

int main()
{
    int fd[2];
    int rev = pipe(fd);

    int cpid = fork();

    if (cpid == 0)
    {
        close(fd[0]);
        const char *msg = "hello this is write call \n";
        write(fd[1], msg, strlen(msg));
        waitpid(cpid, NULL, 0);
        exit(0);
    }
    else
    {
        close(fd[1]);
        char buf[SIZE];
        memset(buf, "\0", SIZE);
        fprintf(stderr, "message is been send to write buf \n");
        int n = read(fd[0], buf, SIZE);
        write(1, buf, n);
        exit(0);
    }

    return 0;
}