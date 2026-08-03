#include <stddef.h>

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char *str = (unsigned char *)s;
	unsigned char ch = (unsigned char)c;
	while (n > 0)
	{
		if (ch == *str)
			return str;
		str++;
	n--;
	}
	return (NULL);
}
