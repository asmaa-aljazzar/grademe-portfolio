#include <unistd.h>

void index_alpha (char *str)
{
	int i;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			i = *str - 'a';
		else if (*str >= 'A' && *str <= 'Z')
			i = *str - 'A';
		else
			i = 1;
		while (i > 0)
		{
			write (1, &(*str), 1);
			i--;
		}
		str++;
	}
}

int	main(int c, char **v)
{
	if (c == 2)
	{
		index_alpha (v[1]);
		write (1, "\n", 1);
	}
	else
		write (1, "wrong number of arguments\n", 26);
	return (0);
}
