#include<unistd.h>

int   t(char  *s )
{	
	int x;

	while(s[x])
		x++;
	return x;
}

int main(int argc, char *argv[] )
{
	int a = 1;

	while ( argv[a] ) 
	{
		write (1, argv[a], t(argv[a]));
		write (1 ,"\n", 1);
		a++;
	}
}
