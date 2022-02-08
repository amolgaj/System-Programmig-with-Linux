#include <stdio.h>
#include <stdlib.h>
#define LINELEN 512
void do_more(FILE *);
int main(int argc , char *argv[]){
   if (argc == 1){
       printf("This is the help page\n");
       exit (0);
   }
   int i = 0;
   FILE * fp;
   while(++i < argc){
      fp = fopen(argv[i] , "r");
      if (fp == NULL){
         perror("Can't open file");
         exit (1);
      }
   do_more(fp);
   fclose(fp); 
   }
   return 0;
}

void do_more(FILE *fp){
   char buffer[LINELEN];
   while (fgets(buffer, LINELEN, fp)){
      fputs(buffer, stdout);
   }
}

