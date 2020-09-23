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
     int i;
     int j;
     int c;
     int x = 0 ;

     while (argv[x])
     {
	     while(argv[x-1])
	 {
	 if (argv[i] > argv[j])
			 {
			 c = argv[i];
			 argv[i] = argv[i+1]
			 argv[i+1] = c;
			}
	j++;
	}
	i++;
	}

while ( argv[x] )  
        {
                write (1, argv[a], t(argv[a]));
                write (1 ,"\n", 1);
                x++;
        }











} 
