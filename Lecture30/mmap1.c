#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char *argv[])
{

    int fd = open("file1.txt", O_RDONLY); // open a file

    int fsize = lseek(fd, 0, SEEK_END); // get size of the file

    char *filedata = mmap(NULL, fsize, PROT_READ, MAP_PRIVATE, fd, 0); // memory map the file

    printf("Data in the file is: %s \n", filedata);

    munmap(filedata, fsize); // Need to free the mapped memory

    close(fd); //  close
    return 0;
}