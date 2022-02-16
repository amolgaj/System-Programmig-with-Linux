#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
int main()
{
    int i = alarm(200);
    printf("i contain : %d \n", i);
    sleep(5);

    int j = alarm(10);
    printf("after alaram 10: j continuous %d \n", j);
    sleep(100);
    exit(0);

    return 0;
}