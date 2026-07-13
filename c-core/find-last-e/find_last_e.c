#include <unistd.h>

int	main(int c, char **v)
{
	if (c != 2)
	{
		write (1, "e\n", 2);
		return (0);
	}
	while (*v[1])
	{
		if (*v[1] == 'e')
		{
			write (1, "e", 1);
			break ;
		}
		v[1]++;
	}
	write (1, "\n", 1);
	return (0);
}
