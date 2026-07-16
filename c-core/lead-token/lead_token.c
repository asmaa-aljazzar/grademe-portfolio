#include <unistd.h>

int is_space (char c)
{
	if (c == 9 || c == 32)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		while(*str)
		{
			if (!is_space(*str))
			 	break;
			str++;

		}
		while(*str)
		{
			if (is_space(*str))
				break;
			write (1, str, 1);
			str++;
		}
	}
	else
		write (1, "wrong number of arguments", 25); 
	write (1, "\n", 1);
	return (0);
}
