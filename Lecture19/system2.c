#include <stdlib.h>
#include <stdio.h>
int main(){
   printf("Executing a script using system from main.\n\n");
   system("/bin/bash script1.sh");
   printf("Done... Bye from main\n");
   exit(0);
}