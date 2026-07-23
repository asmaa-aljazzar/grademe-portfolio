#include <unistd.h>

void	put_nbr  (int n)
{
	int reminder;
	if (n == 0)
		return;
	if (n < 0)
	{
		write (1, "-", 1);
		n *= -1;
	}
	reminder = (n % 10) + '0';
	put_nbr (n / 10);
	write (1, &reminder, 1);
}

int ft_atoi (char *str)
{
	int res = 0;
	int sign = 1;
	int i  = 0;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write (1, "0\n", 2);
		return (0);
	}
	int i = 1;
	int res = 0;
	while (i < argc)
	{
		res += ft_atoi (argv[i]);
		i++;
	}
	if (res == 0)
	{
		write (1, "0\n", 2);
		return (0);
	}
	put_nbr (res);
	write (1, "\n", 1);
	return (0);
}
