#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <error.h>

// extern int error;
void *funct2(void *);
void *funct1(void *);

int main(int argc,char * argv[])
{
    int countfX = atoi(argv[1]);
    int countfO = atoi(argv[2]);
    pthread_t tid1, tid2;

    pthread_create(&tid1, NULL, funct1, (void *)&countfX);
    pthread_create(&tid2, NULL, funct2, (void *)&countfO);

    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);

    printf("bye bye ........\n");
    return 0;
}

void *funct2(void *arg)
{
    int ctr = *((int*)arg);
    for (int i = 0; i < ctr; i++)
    {
        fprintf(stderr, "%s", "O \n");
        pthread_exit(NULL);
    }
}
void *funct1(void *arg)
{
    int ctr = *((int*)arg);
    for (int i = 0; i < ctr; i++)
    {
        fprintf(stderr, "%s", "X \n");
        pthread_exit(NULL);
    }
}