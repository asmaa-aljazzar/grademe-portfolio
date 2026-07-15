#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		char c;
		while (*str)
		{
			c = *str;
			if (*str >= 'a' && *str <= 'z')
				c -= 32;
			else if (*str >= 'A' && *str <= 'Z')
				c += 32;
			write (1, &c, 1);
			str++;
		}
	}
	else
		write (1, "wrong number of arguments", 25);
	write (1, "\n", 1);
	return (0);
}
