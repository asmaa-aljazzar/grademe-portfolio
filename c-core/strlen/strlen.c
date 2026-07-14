#include <stddef.h>

size_t	strlen(const char *s)
{
	unsigned int i = 0;
	while (s[i]) i++;
	return (i);
}
