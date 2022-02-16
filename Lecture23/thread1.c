#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void funct2();
void funct1();

int main()
{
    funct1();
    funct2();

    printf("bye bye ........\n");
    return 0;
}

void funct1()
{
    for (int i = 0; i < 5; i++)
    {
        printf("%s", "AMOL \n");
        fflush(stdout);
        sleep(2);
    }
}
void funct2()
{

    for (int i = 0; i < 5; i++)
    {
        printf("%s", "Gajbhiye \n" );
        fflush(stdout);
        sleep(2);
    }
}