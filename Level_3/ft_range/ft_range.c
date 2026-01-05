#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int len;
	if(start <= end)
		len = end - start + 1;
	else
		len = start - end + 1;
	int *res = malloc(sizeof(int) * len);
	if(!res)
		return 0;

	int i = 0;
	while(i < len)
	{
		res[i] = start;
		if(start < end)
			start++;
		else
			start--;
		i++;
	}
	return res;
}
