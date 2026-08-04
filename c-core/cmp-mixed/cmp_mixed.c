// Compare a and b as plain numbers, not the way C would compare them.
// Return -1 if a is smaller, 0 if both mean the same number, 1 if a is larger.
int	cmp_mixed(int a, unsigned int b)
{
	if (a < 0)
		return -1;
	unsigned int n = (unsigned int) a;
	if (n == b)
		return 0;
	if (n < b)
		return -1;
	return (1);
}
