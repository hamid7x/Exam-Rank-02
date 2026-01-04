#include <unistd.h>

void	ft_putstr(char *s)
{
	int i = 0;
	while(s[i])
		write(1, &s[i++], 1);
}
int main(int argc, char **argv)
{
	if(argc == 3)
	{
		int i = 0;
		int j = 0;
		while(argv[1][i] && argv[2][j])
		{
			if(argv[1][i] == argv[2][j])
				i++;
			j++;
		}
		if(argv[1][i] == '\0')
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
}

