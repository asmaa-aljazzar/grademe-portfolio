#include <unistd.h>

void put_nbr (int n)
{
	char res;
	if (n == 0)
		return ;
	put_nbr (n / 10);
	res = (n % 10) + '0';
	write (1, &res, 1);
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write (1, "FizzBuzz", 8);
		else if (i % 3 == 0)
			write (1, "Fizz", 4);
		else if (i % 5 == 0)
			write (1, "Buzz", 4);
		else
			put_nbr (i);
		write (1, "\n", 1);
		
		i++;
	}
	return (0);
}
