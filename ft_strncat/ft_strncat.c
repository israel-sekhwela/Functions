char	*ft_strncat(char *dest, char *src, int nb)
{
	char *ptr;

	ptr = dest;
	while (*ptr != '\0')
		++ptr;
	while (nb-- && (*ptr++ = *src++) != '\0')
		;
	if (nb <= 0)
		*ptr = '\0';
	return (dest);
}
