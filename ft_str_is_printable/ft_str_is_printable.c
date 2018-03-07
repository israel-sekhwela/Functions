int		ft_isprintable(int c)
{
	return (c > 31 && c < 127);
}

int		ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (ft_isprintable(*str) == 0)
			return (0);
		++str;
	}
	return (1);
}
