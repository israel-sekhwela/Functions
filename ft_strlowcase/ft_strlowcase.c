int		ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (ft_isupper(*ptr))
			*ptr += 'a' - 'A';
		++ptr;
	}
	return (str);
}
