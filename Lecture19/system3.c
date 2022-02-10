#include <stdio.h>
#include <stdlib.h>
int main(){
   char cmd[25];
   int cpid;
   do{
      printf("AMOL_COMMAND_LINE:- ");
      fgets(cmd, 25,stdin);
      system(cmd);
   }while(1);
   return 0;
}