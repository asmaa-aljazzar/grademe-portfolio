#include <stddef.h>

int	is_sorted(const int *a, size_t n)
{
	size_t	i;

	if (n == 0 || n == 1)
		return (1);
	i = 0;
	while (i < n - 1)
	{
		if (a[i] > a[i + 1])
			return (0);
		i++;
	}
	return (1);
}
