#include <stdio.h>
#include <stdlib.h>
int main()
{
     char * historysize = getenv("HISTSIZE");
      printf("Original value of HISTSIZE: %s\n", historysize);
   
      putenv("HISTSIZE=900");
      historysize = getenv("HISTSIZE");
      printf("Changed value of HISTSIZE after getenv: %s\n", historysize);
   
      setenv("HISTSIZE","1000",1);
      historysize = getenv("HISTSIZE");
      printf("Changed value of HISTSIZE after setenv: %s\n", historysize);
      
   return 0;

}

