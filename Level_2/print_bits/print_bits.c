#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 8;
	while(i--)
	{
		char bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}	
}
