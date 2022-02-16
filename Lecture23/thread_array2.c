#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

void *funct1(void *);
int *arr1;
int *arr2;
int *result;
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Invalid arguments, must pass one integer value...\n");
        exit(1);
    }
    int size = atoi(argv[1]);

    arr1 = (int *)malloc(sizeof(int) * size);
    arr2 = (int *)malloc(sizeof(int) * size);
    result = (int *)malloc(sizeof(int) * size);

    printf("\nEnter  %d values for array1\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &arr1[i]);
    printf("\nEnter  %d values for array2\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &arr2[i]);

    pthread_t *tid = (pthread_t *)malloc(sizeof(pthread_t) * size);

    for (int i = 0; i < size; i++)
    {
        pthread_create(&tid[i], NULL, funct1, (void *)&i);
        pthread_join(tid[i], NULL);
    }
    printf("\nI am main thread.Sum of the two arrays is: \n");
    for (int j = 0; j < size; j++)
        printf("%d\n", result[j]);
    return 0;
}

void *funct1(void *args)
{
    int n = *((int *)args);
    result[n] = arr1[n] + arr2[n];
    pthread_exit(NULL);
}