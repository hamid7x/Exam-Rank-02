#include <unistd.h>
int is_prime(int n)
{
	int i = 2;
	while(i < n)
	{
		if(n % i == 0)
			return 0;
		i++;
	}
	return 1;
}
void	ft_putnbr(int n)
{
	if(n >= 10)
		ft_putnbr(n / 10);
	char c = n % 10 + '0';
	write(1, &c, 1);
}
int ft_atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;
	if(s[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while(s[i])
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	return (res * sign);
}
int main(int ac, char **av)
{
	if(ac == 2)
	{
		int n = ft_atoi(av[1]);
		if(n > 0)
		{
			int sum = 0;
			int i = 2;
			while(i <= n)
			{
				if(is_prime(i))
					sum += i;
				i++;
			}
			ft_putnbr(sum);
			write(1, "\n", 1);
		}
		else
			write(1, "0\n", 2);
	}
	else
		write(1, "0\n", 2);
}
