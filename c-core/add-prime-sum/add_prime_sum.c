#include <unistd.h>
#include <stdlib.h>

int ft_atoi (char *str)
{
	int res = 0;
	int sign = 1;
	int i = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

int is_prime (int n)
{
	if (n < 2)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);

	int d = 5;
	while (d * d <= n)
	{
		if (n % d == 0 || n % (d + 2) == 0)
			return (0);
		d += 6;
	}
	return (1);
}

int sum_prime (int n)
{

	int num = 2;
	int res = 0;
	while (num <= n)
	{
		if (is_prime (num))
			res += num;
		num++;
	}
	return res;
}

void put_nbr (int n)
{
	if (n == 0)
		return ;
	put_nbr (n / 10);
	int reminder = n % 10 + '0';
	write (1, &reminder, 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "0\n", 2);
		exit (0);
	}
		int res = sum_prime (ft_atoi (argv[1]));
		if (res != 0)
		{
			put_nbr (res);
			write (1, "\n", 1);
		}
		else
			write (1, "0\n", 2);
	return (0);
}