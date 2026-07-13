#include <unistd.h>

int	main()
{
	char c = 'Z';
	char res;
	int i;
	while (c <= 'Z' && c >= 'A') 
	{
		i = 1;
		while (i <= 4 && c >= 'A')
		{
			if (i == 3 || i == 4)
			{
				res = c + 32;
				write (1, &res, 1);
			}
			else
				write (1, &c, 1);
			i++;
			c--;
		}
	}
	write (1, "\n", 1);
	return (0);
}
