#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    printf("I am running a process! \n ");
    sleep(1);
    printf("I am going to divide the number with zero! \n");
    sleep(1);
    int a = 2, b = 2;
    float ans = 54 / a - b;

    return 0;
}