#include <pthread.h>
#include <stdio.h>
#include <stdlib.h> 
#include <errno.h> 
#include <unistd.h> 
#include <sys/types.h>
#include <sys/syscall.h>

void * funct1(void *);
int main(){
   pthread_t tid1, tid2;
   printf("PID using getpid() in main: %ld\n",(long)getpid());
   printf("Main TID using gettid():%ld\n",(long)syscall(SYS_gettid));
   pthread_create(&tid1, NULL, funct1, NULL);
   pthread_create(&tid2, NULL, funct1, NULL);
   while(1);
   return 0;
}
void* funct1(void* arg){
   printf("PID using getpid() in funct1(): %ld\n",(long)getpid());
   printf("Child TID using gettid():%ld\n",(long)syscall(SYS_gettid));
   while(1);
   pthread_exit(NULL);
}
