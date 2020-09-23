int   t(char  *s ) 
{
	int x ;

	while(s[x] )
		x++;
	return x;
}

int main(int argc, char *argv[] )
{
#include <unistd.h>
write (1, argv[0], t(argv[0]));
}
