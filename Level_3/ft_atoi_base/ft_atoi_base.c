
int is_valid(char c, int base_len)
{
	char lbase[] = "0123456789abcdef";
	char ubase[] = "0123456789ABCDEF";

	int i = 0;
	while(i < base_len)
	{
		if(c == lbase[i] || c == ubase[i])
			return 1;
		i++;
	}
	return 0;
}

int	ft_atoi_base(const char *str, int str_base)
{

	int	i = 0;
	int	sign = 1;
	int 	digit = 0;
	int 	res = 0;

	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	
	while(str[i] && is_valid(str[i], str_base))
	{
		if(str[i] >= '0' && str[i] <= '9')
			digit =  str[i] - '0';
		else if(str[i] >= 'a' && str[i] <= 'f')
			digit = str[i] - 'a' + 10;
		else
			digit = str[i] - 'A' + 10;
		res = res * str_base + digit;
		i++;
	}
	return res * sign;
}
