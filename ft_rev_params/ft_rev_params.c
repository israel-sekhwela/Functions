void	ft_putchar(char c);

int		main(int ac, char *av[])
{
	while (--ac >= 1)
	{
		while (*av[ac])
			ft_putchar(*av[ac]++);
		ft_putchar('\n');
	}
	return (0);
}
