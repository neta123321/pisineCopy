int ft_is_prime(int nb )
{
        int x = 2;
        int a = 1;

        while (x < nb )
        {
                if ( (nb%x) == 0)
                       a = 0;
                x++;
        }
                return (a);
}       

int ft_find_next_prime(int nb )
{
        int x = 0;
	int a;

	 if (nb == 0 || nb == 1 || nb < 0 )
                  return (3);
         while (x < nb )
        {
                    if(ft_is_prime(nb)==1) 
			    return nb;
		    else 
			    nb++;
		    x++;
   	}
}     
