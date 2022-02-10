#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>

int main(){
int fd;
char msg1[] = {"hello this is amol \n"};
char msg2[] = {"this is parent \n"};
char msg3[] = {"this is child \n"};


fd = open("f1 .txt",O_CREAT,O_WRONLY,O_TRUNC,0644);
if (fd == -1)
{
    printf("this is failed \n");
    exit(0);
}
write(fd,msg1,strlen(msg1));
int cpid;
cpid = fork();
if (cpid == 0 )
{
    write(fd,msg3,strlen(msg3));
}
else
{
    write(fd,msg2,strlen(msg2));
}
close(fd);


    return 0;
}