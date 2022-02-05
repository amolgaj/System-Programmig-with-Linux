# include <stdio.h>
# include <unistd.h>
# include <sys/syscall.h>

int main()
{
	int rev ;
	char str[] = {"HELLO THIS IS AMOL:\n"};
	rev = syscall(1,1,str,sizeof str);
	return 0;
}
