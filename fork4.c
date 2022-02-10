#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("must enter one argument  \n");
    }

    int n = atoi(argv[1]);

    for (int i = 0; i < n; i++)
    {
        fork();
        printf("AMOL \n ");
    }
    exit(0);

    return 0;
}