# include<stdio.h>
# include<unistd.h>
# include<stdlib.h>

int main(){

uid_t ruid,suid,euid;
getresuid(&ruid, &suid, &euid);
printf("My REAL USER ID is: %ld \n", (long)ruid);
printf("My SAVED SET USER ID is: %ld \n", (long)suid);
printf("My EFFECTIVE USER ID is: %ld \n", (long)euid);


gid_t rgid,sgid,egid;
getresgid(&rgid, &sgid, &egid);
printf("My REAL USER ID is: %ld \n", (long)rgid);
printf("My SAVED SET USER ID is: %ld \n", (long)sgid);
printf("My EFFECTIVE USER ID is: %ld \n", (long)egid);
return 0 ;
}