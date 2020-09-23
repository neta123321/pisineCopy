int ft_sqrt(int nb)
{
	int x = 0 ;

	if (nb == 0 )
		return (0);

	while (x <= nb)
	{ 
		if(x*x == nb)
			return(x);
		x++; 
	}
	if (x == nb )
		return (0);


}       

