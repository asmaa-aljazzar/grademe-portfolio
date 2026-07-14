#include <unistd.h>

void print_str (char *str)
{
	while (*str)
	{
		write (1, &(*str), 1);
		str++;		
	}
}

int	main(int argc, char **argv)
{

	if (argc >= 2)
		print_str(argv[argc - 1]);
	else
		write (1, "wrong number of arguments", 25);
	write (1, "\n", 1);
	return (0);
}
