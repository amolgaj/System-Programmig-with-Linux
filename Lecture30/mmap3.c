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
    int fd = open("file1.txt", O_RDWR);
    // Stretch the file size to the new size
    lseek(fd, 100, SEEK_END);
    write(fd, "", 1);

    // get attributes of the file
    struct stat sbuff;
    fstat(fd, &sbuff);
    int fsize = sbuff.st_size;

    // memory map the file
    char *filedata = mmap(NULL, fsize, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    printf("Data of file1.txt that is mapped in memory is:\n %s \n", filedata);

    // now write something in the file (remember the cfo is at the end)
    char *newdata = "This is Awsome \n";
    strcat(filedata, newdata);
    printf("New data in the memory mapped region is:\n %s \n", filedata);
    // sync it
    msync(filedata, fsize, MS_SYNC);
    munmap(filedata, fsize);
    close(fd);
    return 0;
}