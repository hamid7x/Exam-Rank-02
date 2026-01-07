#include <unistd.h>
#include <stdlib.h>

int is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int main(int ac, char **av)
{
	if(ac >= 2)
	{
		int i = 0, start, len;
		while(av[1][i] && is_space(av[1][i]))
			i++;
		start = i;
		while(av[1][i] && !is_space(av[1][i]))
			i++;
		len = i - start;
		while(av[1][i])
		{
			while(av[1][i] && is_space(av[1][i]))
				i++;
			if(av[1][i])
			{
				while(av[1][i] && !is_space(av[1][i]))
					write(1, &av[1][i++], 1);
				write(1, " ", 1);
			}
		}
		write(1, &av[1][start], len);
	}
	write(1, "\n", 1);	
}
