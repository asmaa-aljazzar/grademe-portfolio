#include "counter.h"

void	counter_reset(counter *item)
{
	item->value = 0;
}

void	counter_add(counter *item, int amount)
{
	item->value += amount;
}

int	counter_value(const counter *item)
{
	return (item->value);
}
