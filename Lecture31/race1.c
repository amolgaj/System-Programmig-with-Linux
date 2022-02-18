#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
long balance = 0; // global variable
void *increment(void *arg);
void *decrement(void *arg);
int main()
{
    //long balance = 0;
    pthread_t t1, t2;
    pthread_create(&t1, NULL, increment, NULL);
    pthread_create(&t2, NULL, decrement, NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    printf("Value of balance is :%ld\n", balance);
    return 0;
}
void *increment(void *arg)
{
    //long balance = 0;
    for (long i = 0; i < 100000000; i++)
    balance++;
    pthread_exit(NULL);
}
void *decrement(void *arg)
{
    //long balance = 0;
    for (long j = 0; j < 100000000; j++)
    
     balance--;
    pthread_exit(NULL);
}
