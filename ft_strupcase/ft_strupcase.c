int		ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strupcase(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (ft_islower(*ptr))
			*ptr -= 'a' - 'A';
		++ptr;
	}
	return (str);
}
