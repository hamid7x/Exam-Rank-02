
unsigned int lcm(unsigned int a, unsigned int b)
{
	if(a == 0 || b == 0)
		return 0;
	unsigned int	i;
	if(a > b)
		i = a;
	else
		i = b;
	while(1)
	{
		if((i % a == 0) && (i % b == 0))
			return i;
		i++;
	}
}
