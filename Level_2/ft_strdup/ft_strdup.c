#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	char *dup = malloc(sizeof(char) * (i + 1));
	if(!dup)
		return NULL;
	int j = 0;
	while(j < i)
	{
		dup[j] = str[j];
		j++;
	}
	dup[j] = '\0';
	return dup;
}
