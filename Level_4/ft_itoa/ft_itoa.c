#include <stdlib.h>

int calc_nbr(int n)
{
	int count = 0;
	while(n != 0)
	{
		n = n / 10;
		count++;
	}
	return count;
}
char *ft_itoa(int nbr)
{
	char *str;
	int 	is_negative = 0;
	if(nbr == 0)
	{
		str = malloc(sizeof(char) * 2);
		if(!str)
			return NULL;
		str[0]='0';
		str[1]='\0';
		return str;
	}
	if(nbr < 0)
	{
		is_negative = 1;
		nbr *= -1;
	}
	int len = calc_nbr(nbr) + is_negative;
	str = malloc(sizeof(char) * (len + 1));
	if(!str)
		return NULL;
	str[len--] = '\0';
	while(nbr != 0)
	{
		int remd = nbr % 10;
		str[len] = remd + '0';
		nbr =  nbr / 10;
		len--;
	}
	if(is_negative)
		str[0] = '-';
	return str;
}
