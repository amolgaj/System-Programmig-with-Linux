#include <unistd.h>
#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <errno.h>

extern int errno;
int main () {
printf("Directory scan of /home: \n");
DIR* dp = opendir("/home");
chdir("/home");
errno = 0;
struct dirent* enter;
while(1){
enter = readdir(dp);
if(enter == NULL && errno != 0 ){
perror("readdir");
return errno;
}

if(enter == NULL && errno == 0 ){
printf("end of directory \n");
return 0;

}

printf("%s",enter->d_name);


}

closedir(dp);
 
return 0 ;
}
