#include <stdlib.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		write (1, "wrong number of arguments\n", 26);
		return 0;
	}
	int width = atoi (av[1]);
	int hight = atoi (av[2]);
	if (hight <= 0 || width <= 0)
		return 0;
	int col;
	int row = 1;
	while (row <= hight)
	{
		col = 1;
		while (col <= width)
		{
			if ((row == 1 && (col == 1 || col == width))
				|| (row == hight && (col == 1 || col == width)))
					write (1, "+", 1);
			else if (row == 1 || row == hight)
				write (1, "-", 1);
			else if (col == 1 || col == width)
				write (1, "|", 1);
			else
				write (1, " ", 1);
			col++;
		}
		write (1, "\n", 1);
		row++;
	}
	return (0);
}
