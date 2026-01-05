#include <unistd.h>

int ft_atoi(char *s)
{
	int i = 0;
	int res = 0;
	while(s[i])
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	return res;
}
void	ft_print_hex(int n)
{
	char base[] = "0123456789abcdef";
	if(n >= 16)
		ft_print_hex(n / 16);
	write(1, &base[n % 16], 1);
}
int	main(int ac, char **av)
{
	if(ac == 2)
	{
		int n = ft_atoi(av[1]);
		ft_print_hex(n);
	}
	write(1, "\n", 1);
}
