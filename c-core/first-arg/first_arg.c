#include <unistd.h>

int	main(int c, char **v)
{
	if (c >= 2)
	{
		while (*v[1])
		{
			write (1, &(*v[1]), 1);
			v[1]++;
		}
	}
	else 
		write (1, "wrong number of arguments", 25);
	write (1, "\n", 1);
	return (0);
}

