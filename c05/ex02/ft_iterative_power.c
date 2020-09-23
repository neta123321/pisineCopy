int ft_iterative_power( int nb ,int power)
{
	int x;
	int b;

	b = nb;	
	x = 1;

	if (nb < 0 )
		return(0);
	else if (nb == 1)
		return(1);
	else  
	{
		while (x < power)
		{
			nb *= b;
			x++;
		}
	}
	return(nb);
}
