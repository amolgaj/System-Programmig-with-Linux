#include <stdio.h>  
#include <stdlib.h>
#include <unistd.h>

void myexit(int exitStatus, void *arg){
	printf("Exit Handler called with exit status=%d and arg=%ld\n", exitStatus, (long)arg);
}
 
int main(int argc, char *argv[]){
	on_exit(myexit, (void *)7);
	printf("This is Amol \n");
	exit(54);
}

