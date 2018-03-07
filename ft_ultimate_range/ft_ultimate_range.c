#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *rptr;

	if (min >= max)
		return (0);
	*range = malloc((max - min) * sizeof(int));
	if (!*range)
		return (0);
	rptr = *range;
	while (min < max)
		*rptr++ = min++;
	return ((int)(rptr - *range));
}
