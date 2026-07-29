unsigned int lcm(unsigned int a, unsigned int b)
{
	if (a == 0 || b == 0)
		return (0);
	if (a == b || b == 1)
		return (a);
	if (a == 1)
		return b;
	unsigned int i = 2;
	while ((i * b) % a != 0)
		i++;
	return (i * b);
}
