#include <stddef.h>

void	*memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *dest = dst;
	unsigned char *sorc = ((unsigned char *)src);
	unsigned int i = 0;
	while (i < n)
	{
		dest[i] = sorc[i];
		i++;
	}
	return (dst);
}
