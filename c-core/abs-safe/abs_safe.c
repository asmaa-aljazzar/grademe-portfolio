// Return the absolute value of n as a long.
// Widen to long before negating, never after.
long	abs_safe(int n)
{
	long num = (long) n;
	if (num < 0)
		num *= -1;
	return (num);
}
