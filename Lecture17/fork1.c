#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{

    int cpid = fork();
    if (cpid == 0)
    {
        printf("the child have return \n");
    }

    else
    {
        printf("the parent have return \n");
    }

    return 0;
}
