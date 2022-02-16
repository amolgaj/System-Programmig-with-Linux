# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <signal.h>

int main()
{
    printf("the signal will kill me after 5 sec (SIGKILL...)");
    sleep(5);
    kill(getpid(),1);

    printf("I wont be printed \n");


return 0;
}