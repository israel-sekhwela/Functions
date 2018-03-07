int		ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int		ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (ft_isalpha(*str) == 0)
			return (0);
		++str;
	}
	return (1);
}
