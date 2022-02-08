# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

int main(){
int fd = open ("file1.txt",O_RDWR|O_CREAT,O_TRUNC,0622);
printf("open () returns fd = %d \n",fd);

//create and print values of cfo

int cfo = lseek(fd,0,SEEK_CUR);
printf("Location of the CFO = %d \n",cfo);


//write and check values of cfo

write(fd, "abcde" , 5);
cfo = lseek(fd,0,SEEK_CUR);
printf("Location of the CFO after writing ""abcde"" = %d \n",cfo);

//move the write and check to 100

lseek(fd , 100 , SEEK_END);
cfo = lseek(fd,0,SEEK_CUR);
printf("Location of the CFO after lseek 100 = %d \n",cfo);

//write and check values of cfo

write(fd, "ABCDE" , 5);
cfo = lseek(fd,0,SEEK_CUR);
printf("Location of the CFO after writing ABCDE = %d \n",cfo);


return 0;

}
