int	 ft_iterative_factorial(int nb)
{ 
	int x;

	x = 0;
	int y = nb - 1;
	int b = nb -1;

	if (nb >= 0  )
	{	
		while  (x < y)
		{        
			nb *= b ;
			b--;
			x++;
		}
		printf("%d\n",nb);
		return(nb); 
	}
	else 
		return(0);
} 

