char	*ft_strcpy(char *dest, char *src)
{
	char *buffer;

	buffer = dest;
	while ((*buffer++ = *src++) != '\0')
		;
	return (dest);
}
