char	*ft_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = dest;
	while (*ptr != '\0')
		++ptr;
	while ((*ptr++ = *src++) != '\0')
		;
	return (dest);
}
