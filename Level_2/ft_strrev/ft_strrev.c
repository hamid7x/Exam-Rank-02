
char	*ft_strrev(char *str)
{
	int len = 0;
	while(str[len])
		len++;
	int i = 0;
	while(i < len / 2)
	{
		char tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
	return str;
}
