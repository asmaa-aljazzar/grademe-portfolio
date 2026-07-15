#include <unistd.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int compute (int num1, char op, int num2)
{
	if (op == '+')
		return (num1 + num2);
	if (op == '-')
		return (num1 - num2);
	if (op == '*')
		return (num1 * num2);
	if (op == '/' && num2 != 0)
		return (num1 / num2);
	if (op == '%')
		return (num1 % num2);
	else
		return (0);

}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][1] == '\0')
		{
			int num1 = atoi (argv[1]);
			char op = argv[2][0];
			int num2 = atoi (argv[3]);
			printf ("%d\n", compute (num1, op, num2));
		}

	}
	else
		write (1, "wrong number of arguments\n", 26);
	return (0);
}
