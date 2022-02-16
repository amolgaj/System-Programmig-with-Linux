#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <error.h>

//extern int error;
void *funct2(void *);
void *funct1(void *);

int main()
{
    pthread_t tid1, tid2;

    pthread_create(&tid1, NULL, funct1, NULL);
    pthread_create(&tid2, NULL, funct2, NULL);

    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);

    printf("bye bye ........\n");
    return 0;
}

void * funct2(void * arg)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%s", "GAJBHIYE \n" );
        fflush(stdout);
        sleep(2);
        
    }
}
void * funct1(void * arg)
{

    for (int i = 0; i < 5; i++)
    {
        printf("%s", "AMOL \n" );
        fflush(stdout);
        sleep(2);
        
    }
}