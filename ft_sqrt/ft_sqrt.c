int		ft_sqrt(int nb)
{
	int result;

	result = 1;
	while (result * result <= nb)
	{
		if (result * result == nb)
			return (result);
		++result;
	}
	return (0);
}
