#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{

    uid_t ruid, suid, euid;
    getresuid(&ruid, &suid, &euid);
    printf("My REAL USER ID is: %ld \n", (long)ruid);
    printf("My SAVED SET USER ID is: %ld \n", (long)suid);
    printf("My EFFECTIVE USER ID is: %ld \n", (long)euid);

    int rv = setresuid(100, 2000, 3000);
    if (rv == -1)
    {
        printf("Error no is %d", rv);
        exit(1);
    }

    gid_t rgid, sgid, egid;
    getresgid(&rgid, &sgid, &egid);
    printf("AFTER SETUID (2000) THE ID ARE \n");
    printf("My REAL USER ID is: %ld \n", (long)rgid);
    printf("My SAVED SET USER ID is: %ld \n", (long)sgid);
    printf("My EFFECTIVE USER ID is: %ld \n", (long)egid);

    return 0;
}