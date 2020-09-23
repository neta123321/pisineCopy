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
	 int x = 1;
 	while (argv[x])
	{
		x++;
	}

	int a = x;
// essayer avc la fonction t sur le mac 
	while ( a >= 1)  // regardez sin c'est 1 ou 2

	{
		write (1, argv[a], t(argv[a]));
		write (1 ,"\n", 1);
		a--;
	}
}

