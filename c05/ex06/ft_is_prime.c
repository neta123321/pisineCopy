int ft_is_prime(int nb )
{
	int x = 2;
        int a = 1;	
	if (nb == 0 || nb == 1 || nb < 0 )
	{ 
		return (0); 
	}

	while (x < nb )
	{ 
        	if ( (nb%x) == 0 )
		 {	
		       a = 0;
		 }
		x++;

	}
		return (a);

}


