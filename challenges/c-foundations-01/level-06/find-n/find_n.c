#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
		{
			if (*argv[1] == 'n')
			{
				write (1, "n", 1);
				break;
			}
			argv[1]++;
		}
	}
	else
		write (1, "wrong number of arguments", 25);
	write (1, "\n", 1);
	return (0);
}
