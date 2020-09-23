int ft_recursive_power(int nb , int power )
{
	
	int b;

	b = nb;


	if (nb < 0 )
		return(0);
	else if (nb == 0)
		return(1);
	else if (nb > 0) 
	{
        nb = b * ft_recursive_power( nb  ,power-1);

	}
	return(nb);
}


int main()
{
printf("%d",ft_recursive_power(2,3));

}
