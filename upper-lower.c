#include <stdio.h>

void main(int argc, char *argv[])
{
	int i=0;
	while (argv[1][i]!='\0')
	{
		if(argv[1][i]>='a' && argv[1][i]<='z')
		{
			argv[1][i]=argv[1][i]-32;
		}
		else if (argv[1][i]>='A' && argv[1][i]<='Z')
		{
			argv[1][i]=argv[1][i]+32;
		}
		printf("%c", argv[1][i]);
		i++;
	}
	printf("\n");
}