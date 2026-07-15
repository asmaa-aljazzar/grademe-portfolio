#include <unistd.h>

int	putchar(int c)
{
	unsigned char uc = (unsigned char) c;
	write (1, &uc, 1);
	return (c);
}
