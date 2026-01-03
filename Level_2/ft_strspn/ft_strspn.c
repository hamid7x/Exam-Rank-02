#include <stddef.h>

size_t	is_not_found(char c, const char *accept)
{
	size_t i = 0;
	while(accept[i])
	{
		if(accept[i] == c)
			return 0;
		i++;
	}
	return 1;
}
size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	while(s[i])
	{
		if(is_not_found(s[i], accept))
			return i;
		i++;
	}
	return i;
}
