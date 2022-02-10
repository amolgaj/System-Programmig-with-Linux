# include <stdio.h>
# include <unistd.h>

int main(){
printf("MY PID is %ld \n",(long)(getpid()));
printf("MY PPID is %ld \n",(long)(getppid()));

return 0 ;

}