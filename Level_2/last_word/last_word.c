#include <unistd.h>

int is_space(char c)
{
	if(c == ' ' || (c >= 9 && c <= 13))
		return 1;
	return 0;
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i = 0;
		while(argv[1][i])
			i++;
		i--;
		while(i >= 0 && is_space(argv[1][i]))
			i--;
		int end = i;
		while(i >= 0 && !is_space(argv[1][i]))
			i--;
		i++;
		while(i <= end)
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
}
