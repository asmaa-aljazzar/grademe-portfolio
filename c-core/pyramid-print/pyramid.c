#include <stdlib.h>
#include <unistd.h>

// argv[1] is the height. Print a centered pyramid of '#', one row per line.
// A wrong argument count prints "wrong number of arguments" and a newline.
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int hight = atoi (argv[1]);
		int row = 1;
		int len;
		int space;
		while (row <= hight)
		{
			space = hight - row;
			len = 2 * row - 1;
			while (space > 0)
			{
				write (1, " ", 1);
				space--;
			}
			while (len > 0)
			{
				write (1, "#", 1);
				len--;
			}
			write (1, "\n", 1);
			row++;
		}
	}
	else
		write (1, "wrong number of arguments\n", 26);
	return (0);
}
