#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[]){
int holes = atoi(argv[1]);
int fd = open("filewithholes",O_CREAT|O_WRONLY|O_TRUNC, 0644);
write(fd, "AMOL", 5);
for(int i = 0; i < holes; i++){
lseek(fd, 10, SEEK_CUR);
write(fd, "AMOL", 5);
}
close(fd);
return 0;
}

