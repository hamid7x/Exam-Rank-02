#include <unistd.h>

void	ft_putnbr(int n)
{
	if(n >= 10)
		ft_putnbr(n / 10);
	char c = n % 10 + '0';
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		int i = 0;
		int n = 0;
		while(av[1][i] && (av[1][i] >= '0' && av[1][i] <= '9'))
		{
			n = n * 10 + (av[1][i] - '0');
			i++;
		}
		i = 1;
		while(i < 10)
		{
			ft_putnbr(i);
			write(1," x ", 3);
			ft_putnbr(n);
			write(1, " = ", 3);
			ft_putnbr(n * i);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
