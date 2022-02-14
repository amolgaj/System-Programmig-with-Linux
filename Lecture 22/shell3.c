#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int n ,i ;
    printf("enter no of argument to be used : \n");
    scanf("%d", &n);
    char **argument = (char **)malloc(sizeof(char) * (n + 1));
    for ( i = 0; i < n; i++)
    {
        argument[i] = (char *)malloc(sizeof(char) * 10);
    }

    for ( i = 0; i < n; i++)
    {
        printf("enter the argument %d :- , \n", i);
        scanf("%s", argument[i]);
    }
    argument[i] = NULL;
    execvp(argument[0], argument);
    perror("the programm failed: \n");

    return 0;
}