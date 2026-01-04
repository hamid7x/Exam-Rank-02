

int	is_power_of_2(unsigned int n)
{
	int res = 1;
	while(res <= n)
	{
		if(res == n)
			return 1;
		res = res * 2;
	}
	return 0;

}

