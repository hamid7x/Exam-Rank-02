#include <unistd.h>

int to_upper(char c)
{
	if(c >= 'a' && c <= 'z')
		return (c - 32);
	return c;
}
void ft_putchar(int c)
{
	write(1, &c, 1);
}
int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i = 0;
		while(argv[1][i])
		{
			if(argv[1][i] == '_')
				ft_putchar(to_upper(argv[1][++i]));
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
}
