#include <unistd.h>

int	is_space(int c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}
int main(int ac, char **av)
{
	if(ac == 2)
	{
		int i = 0, j;
		while(av[1][i])
			i++;
		while(i >= 0)
		{
			i--;
			while(i >= 0 && !is_space(av[1][i]))
				i--;
			j = i + 1;
			while(av[1][j] && !is_space(av[1][j]))
				write(1, &av[1][j++], 1);
			if(i > 0)
				write(1, " ", 1);
	
		}
	}
	write(1, "\n", 1);
}
