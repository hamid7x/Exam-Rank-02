#include<stdlib.h>

int is_space(char c)
{
	if(c == ' ' || (c >= 9 && c <= 13))
		return 1;
	return 0;
}

int	count_words(char *s)
{
	int  i = 0;
	int count = 0;
	while(s[i])
	{
		while(is_space(s[i]))
			i++;
		if(s[i])
		{	
			count++;
			while(s[i] && !is_space(s[i]))
				i++;	
		}
	}
	return count;	
}
char	**ft_split(char *s)
{
	char	**arr;
	int	i = 0, j, start, size, arr_i = 0;
	
	if(!s)
		return NULL;	
	size = count_words(s);
	arr = malloc(sizeof(char *) * (size + 1));
	if(!arr)
		return NULL;
	while(s[i])
	{
		while(s[i] && is_space(s[i]))
			i++;
	        start = i;
		while(s[i] && !is_space(s[i]))
			i++;
		
		if(i > start)
		{
			arr[arr_i] = malloc(sizeof(char) * (i - start + 1));
			if(!arr[arr_i])
			{
				i = 0;
				while(i < arr_i)
					free(arr[i++]);
				free(arr);
				return NULL;
			}
			j = 0;
			while(start < i)
				arr[arr_i][j++] = s[start++];
			arr[arr_i++][j] = '\0';			
		}
	}
	arr[arr_i] = NULL;
	return arr;
}

