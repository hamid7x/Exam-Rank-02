#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i = 0;
		while(argv[1][i])
		{	
			char c = argv[1][i];
			int count = 1;

			if(c >= 'a' && c <= 'z')
				count = c - 'a' + 1;
			else if(c >= 'A' && c <= 'Z')
				count = c - 'A' + 1;
			while(count--)
				write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
