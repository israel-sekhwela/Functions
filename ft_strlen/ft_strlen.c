void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
	{
		++len;
	}
	return (len);
}
