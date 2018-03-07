int		ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int		ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (ft_islower(*str) == 0)
			return (0);
		++str;
	}
	return (1);
}
