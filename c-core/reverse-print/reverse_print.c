#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int len = 0;
		while(argv[1][len]) len++;
		while (len - 1 >= 0)
		{
			write (1, &argv[1][len - 1], 1);
			len--;
		}
	}
	else
		write (1, "wrong number of arguments", 25);
	write (1, "\n", 1);
	return (0);
}
