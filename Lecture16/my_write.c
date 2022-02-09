#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "usage : ./a.out ttyname \n");
        exit(0);
    }
    int fd = open(argv[1], 1);
    if (fd == -1)
    {
        perror("open() failed");
        exit(1);
    }

    char buff[512];
    while (fgets(buff, 512, stdin) != NULL)
    {
        if (write(fd, buff, strlen(buff)) == -1)

        {
            break;
        }
        close(fd);
        return 0;
    }
}