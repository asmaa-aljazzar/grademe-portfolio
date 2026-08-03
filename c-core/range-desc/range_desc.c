#include <stdlib.h>
int *range_desc(int min, int max)
{
	if (min > max) return 0;
	int *maxmin = (int *) malloc (sizeof (int) * ((max - min) + 1));
	if (!maxmin) return 0;
	int i = 0;
	while (max >= min)
	{
		maxmin[i] = max;
		max--;
		i++;
	}
	return (maxmin);
}