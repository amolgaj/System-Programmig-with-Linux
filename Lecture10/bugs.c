#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
extern int errno;
int main(){
   char * arr  = (char*) malloc (sizeof(char)*10);
   if(arr==NULL){
      perror("malloc failed:");
      exit(errno);
   }
   arr[0]='a';
   arr[1]='m';
   arr[2]='o';
   arr[3]='l';
   arr[4]='\0';
   printf("%s\n",arr);
   free(arr);
   //arr[0] = 'b';
   return 0;
}

