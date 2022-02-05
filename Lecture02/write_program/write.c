# include <stdio.h>
# include <unistd.h>

int main()
{
	int ret;
	char str[]={"HELLO THIS IS AMOL:\n"};
	ret = write(1,str,sizeof str);
	return ret;
}
