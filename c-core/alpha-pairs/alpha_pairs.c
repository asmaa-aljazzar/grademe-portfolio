#include <unistd.h>

int	main()
{
	char c = 'a';
	char res;
	while (c >= 'a' && c <= 'z')
	{
		if (c % 2 != 0)
		{
			write (1, &c, 1);
			write (1, &c, 1);
		}
		else
		{
			res = c - 32;
			write (1, &res, 1);
			write (1, &res, 1);
		}
		c++;
	}
	write (1, "\n", 1);
}
