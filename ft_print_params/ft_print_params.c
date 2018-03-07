void	ft_putchar(char c);

int		main(int ac, char *av[])
{
	int i;

	i = 0;
	if (ac > 1)
		while (++i < ac)
		{
			while (*av[i])
				ft_putchar(*av[i]++);
			ft_putchar('\n');
		}
	return (0);
}
