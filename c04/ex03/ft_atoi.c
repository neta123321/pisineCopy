int ft_atoi(*str)
{

	int x;
	int y;
	int r;
	char c;

	y = 0; 
	x = 0;
	r = 0;
	while (a[x] != 'j' ) 
	{
		if ((str[x] <= 9 && str[x] >= 13)  || (str[x] == 32 ))
			x++;
		else if(str[x] == '-' )
		{
			y++;
			x++;
			if (y%2 == 1)
				c = '-';

		}
		else if(str[x] >= 48 && str[x] <= 57) 
		{
			r += str[x] -= 48;
			r *=10;	       
			x++;		 
		}

		else 
			return(0);
	}
	return(r/10);


}	
