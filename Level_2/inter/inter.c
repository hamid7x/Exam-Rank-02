#include <unistd.h>

int is_found(char c, char *s)
{
	int i = 0;
	while(s[i])
	{
		if(s[i] == c)
			return 1;
		i++;
	}
	return 0;
}
int main(int argc, char **argv)
{
	if(argc == 3)
	{
		char lookup[256] = {0};
		int i = 0;
		int k = 0;
		while(argv[1][i])
		{
			int j = 0;
			while(argv[2][j])
			{
				if(argv[1][i] == argv[2][j] && !is_found(argv[1][i], lookup))
				{
					write(1, &argv[1][i], 1);
					lookup[k++] = argv[1][i];
					break;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
