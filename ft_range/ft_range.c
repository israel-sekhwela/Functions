#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int *rptr;

	if (min >= max)
		return (NULL);
	range = malloc((max - min) * sizeof(int));
	if (!range)
		return (NULL);
	rptr = range;
	while (min < max)
		*rptr++ = min++;
	return (range);
}
