#include <stdio.h>
#include <stdlib.h>

int gcd (int a, int b)
{
	int temb;
	while (b)
	{
		temb = b;
		b = a % b;
		a = temb;
	}
	return a;
}

int	main(int argc, char **argv)
{
	int result;
	if (argc == 3)
	{
		result = gcd (atoi(argv[1]), atoi (argv[2]));
		printf ("%d\n", result);
	}
	else
		printf ("wrong number of arguments\n");
	return (0);
}
