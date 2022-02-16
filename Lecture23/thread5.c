#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
struct mystruct
{
    char character;
    int count;
};
void *funct1(void *);

int main()
{
    pthread_t tid1, tid2;
    struct mystruct t1_args;
    struct mystruct t2_args;

    t1_args.character = 'X';
    t1_args.count = 1000;
    pthread_create(&tid1, NULL, funct1, (void *)&t1_args);

    t2_args.character = 'O';
    t2_args.count = 800;
    pthread_create(&tid2, NULL, funct1, (void *)&t2_args);

    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);

    printf("\nBye Bye from main thread.\n");
    return 0;
}

void *funct1(void *args)
{
    struct mystruct p = *(struct mystruct *)args;
    for (int i = 0; i < p.count; i++)
        putc(p.character, stdout);
    pthread_exit(NULL);
}