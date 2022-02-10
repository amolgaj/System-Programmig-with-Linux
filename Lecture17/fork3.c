#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int i, cpid, ctr = 0;
    cpid = fork();
    if (cpid == 0)
    {
        ctr = 100;
        for (i = 0; i < 3; i++)
        printf("child count %d \n", ctr++);
    }

    else
    {
        for (i = 0; i < 3; i++)
            printf("parents count %d \n", ctr++);
    }
    return 0;
}
