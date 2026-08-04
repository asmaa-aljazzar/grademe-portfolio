#include <unistd.h>

int	putchar(int c)
{
	unsigned char ch = (unsigned char) c + '\0';
	write (1, &ch, 1);
	return (c);
}
