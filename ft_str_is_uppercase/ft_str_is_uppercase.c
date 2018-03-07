int		ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int		ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (ft_isupper(*str) == 0)
			return (0);
		++str;
	}
	return (1);
}
