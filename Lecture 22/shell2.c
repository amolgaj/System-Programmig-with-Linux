# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int main()
{

    char *argument[3];
    for (int  i = 0; i < 3; i++)
    {
        argument[i] = (char*)malloc(sizeof(char)*10);
    }

    printf("enter the argument1 :- \n");
    scanf("%s",argument[0]);
    printf("enter argument 2 :- \n");
    scanf("%s",argument[1]);
    argument[2]=NULL;
    execvp(argument[0],argument);
    perror("the programm failed: \n");
    exit(1);    


return 0;
}