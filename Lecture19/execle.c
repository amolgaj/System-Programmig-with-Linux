#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <wait.h>
extern char ** environ;
int main(){
   int status;
   pid_t cpid = fork();
   if (cpid == 0){
      execle("/usr/bin/google-chrome","google-chrome",NULL, environ);
      perror("exec failed");
   }
   else{
      wait(&status);
      printf("Hello Im Parent.\n");
   }
   return 0;
}
