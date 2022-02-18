#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
char **ptr;
void *thread_function(void *localarg);
int main()
{
    pthread_t tid[2];
    char *msg[2] = {"Hello.. I am AMOL", "My surname is Gajbhiye "};
    ptr = msg;
    for (int i = 0; i < 2; i++)
    {
        pthread_create(&tid[i], NULL, thread_function, (void *)&i);
        pthread_join(tid[i], NULL);
    }
    return 0;
}
void *thread_function(void *localarg)
{
    int myid = *((int *)localarg);
    static int svar = 10000;
    printf("[%d]: %s (svar = %d)\n", myid, ptr[myid], svar++);
    pthread_exit(NULL);
}