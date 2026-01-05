#include <stdlib.h>

int	*ft_rrange(int start, int end)
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
		res[i] = end;
		if(start < end)
			end--;
		else
			end++;
		i++;
	}
	return res;
}
