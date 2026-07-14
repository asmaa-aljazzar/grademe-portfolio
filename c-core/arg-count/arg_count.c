#include <unistd.h>

void put_nbr (int n)
{
	char res;
	if (n == 0)
		return ;
	put_nbr (n / 10);
	res = n + '0';
	write (1, &res, 1);
}
int	main(int argc, char **argv)
{
	(void)argv;
	if (argc >= 2)
		put_nbr (argc - 1);
	else
		write (1, "0", 1);
	write (1, "\n", 1);
	return (0);
}
