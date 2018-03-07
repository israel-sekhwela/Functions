void	ft_putchar(char c);

int		main(int ac, char *av[])
{
	if (ac == 1)
	{
		while (*av[0] != '\0')
			ft_putchar(*av[0]++);
		ft_putchar('\n');
	}
	return (0);
}
