#include <limits.h>
void	div_mod_floor(int a, int b, int *q, int *r)
{
	if (b == 0 || (a == INT_MIN && b == -1)) return ;
	*r = a % b;
	if (*r < 0)
	{
		if (b < 0) *r -= b;
		else *r += b;
	}
	*q = (a - *r) / b;
}
