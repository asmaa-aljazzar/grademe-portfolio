#include <unistd.h>

void ft_put_str (char *str)
{
	int i = 0;
	while (str[i]) i++;
	write (1, str, i);
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	while (argc > 1)
	{
		ft_put_str (argv[argc - 1]);
		argc--;
	}
	return (0);
}
