#include <unistd.h>

int is_alpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int main(int ac, char **av)
{
	if(ac > 1)
	{
		int i = 1;
		int j;
		while(av[i])
		{
			j = 0;
			while(av[i][j])
			{
				if(is_alpha(av[i][j]) && !is_alpha(av[i][j + 1]))
				{
					if(av[i][j] >= 'a' && av[i][j] <= 'z')
						av[i][j] -= 32;
				}
				else if(av[i][j] >= 'A' && av[i][j] <= 'Z')
					av[i][j] += 32;
				write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
