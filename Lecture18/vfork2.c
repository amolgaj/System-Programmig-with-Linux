#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int gvar = 54;
int main()
{
    pid_t cpid = vfork();
    int lvar = 100;
    if (cpid == 0)
    {
        
        lvar++;
        gvar++;
        printf("Hello this is child and this is my ...\n");
        printf(" gvar = %d, lvar = %d \n",gvar, lvar );
        exit(1);
    }

    else
    {
        printf("hello this is parent and ..... \n");
        printf(" gvar = %d, lvar = %d \n", gvar ,lvar);
        exit(1);
    }

    return 0;
}