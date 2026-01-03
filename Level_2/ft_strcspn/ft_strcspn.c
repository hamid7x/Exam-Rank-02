#include <stddef.h>

size_t	is_found(char c, const char *reject)
{
	size_t i = 0;
	while(reject[i])
	{
		if(reject[i] == c)
			return 1;
		i++;
	}
	return 0;
}
size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	while(s[i])
	{
		if(is_found(s[i], reject))
			return i;
		i++;
	}
	return i;
}
