#include <unistd.h>
int	main(int argc, char **argv)
{
	// index updated for occurance of the char
	if (argc == 4)
	{
		if (argv[2][1] == '\0' && argv[3][1] == '\0')
		{
		int last_index = -1; 
		int i = 0;
		char *str = argv[1];
		char c1 = argv[2][0];
		char c2 = argv[3][0];
		int len = 0;
		while (str[len]) len++;

		// loop to find index
		while (str[i])
		{
			if (str[i] == c1)
				last_index = i;
			i++;
		}
		// if index still -1 then there is no appear
		if (last_index == -1) 
			write (1, str, len);
		else {
			i = 0;
			while (str[i])
			{
				if (i == last_index)
					write (1, &c2, 1);
				else
					write (1, &str[i], 1);
				i++;
			}
		}
		}

	}
	else
		write (1, "wrong number of arguments", 25);
	write (1, "\n", 1);
	return (0);
}
