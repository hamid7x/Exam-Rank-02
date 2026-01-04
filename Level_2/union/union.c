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
		char lookup[256]={0};
		char *s1 = argv[1];
		char *s2 = argv[2];
		int i = 0;
		int k = 0;
		while(s1[i])
		{
			if(!is_found(s1[i], lookup))
			{
				write(1, &s1[i], 1);
				lookup[k++] = s1[i];
			}
			i++;
		}
		i = 0;
		while(s2[i])
		{
			if(!is_found(s2[i], lookup))
			{
				write(1, &s2[i], 1);
				lookup[k++] = s2[i];
			}
			i++;
		}
	}
	write(1, "\n", 1);
}


