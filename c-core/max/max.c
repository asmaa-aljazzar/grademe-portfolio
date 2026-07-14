int max(int *tab, unsigned int len)
{
	if (len == 0)
		return 0;
	int m = tab[0];
	unsigned int i = 0;
	while (i < len)
	{
		if (tab[i] > m)
			m = tab[i];
		i++;
	}
	return (m);
}
