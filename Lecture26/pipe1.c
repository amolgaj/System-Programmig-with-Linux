#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#define SIZE 25

int main()
{
    char *messg = ("Hello this is a pipe program : \n");
    char buf[SIZE];
    memset(buf, '\0', SIZE);

    int fd[2];
    int rv = pipe(fd);
    if (rv == -1)
    {
        perror("pipe is not working : \n");
        exit(1);
    }

    int char_wr = write(fd[1], messg, strlen(messg));

    int char_rd = read(fd[0], buf, char_wr);

    write(1, buf, char_rd);
    while (1)
        ;
    return 0;
}