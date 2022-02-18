#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char *argv[])
{

    int fd = open("file1.txt", O_RDONLY); // open a file

    struct stat sbuff; // get attributes of the file
    fstat(fd, &sbuff);
    int fsize = sbuff.st_size;

    char *filedata = mmap(NULL, fsize, PROT_READ, MAP_SHARED, fd, 0); // memory map the file

    pid_t cpid = fork(); // create a child process
    if (cpid == 0)
    {
        printf("Child access memory mapped file:\n %s \n", filedata);
        munmap(filedata, fsize);
        close(fd);
        exit(0);
    }
    else
    {
        waitpid(cpid, NULL, 0);
        printf("Parent access memory mapped file:\n %s \n", filedata);
        munmap(filedata, fsize);
        close(fd);
        exit(0);
    }
    return 0;
}