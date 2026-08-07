// Count the decimal digits of n, sign excluded, with zero written as one digit.
// Never negate n: INT_MIN has no positive counterpart inside an int.
int	digit_count(int n)
{
	int count = 1;
	while (n / 10 != 0)
	{
		count += 1;
		n /= 10;
	}
	return (count);
}
