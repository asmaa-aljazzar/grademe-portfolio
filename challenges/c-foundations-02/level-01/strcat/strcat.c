int strlen (char *str)
{
	if (!str)
		return 0;
	int i = 0;
	while (str[i]) i++;
	return i;
}
char	*strcat(char *dst, const char *src)
{
	int i = 0;
	int len = strlen (dst);
	while (src[i])
	{
		dst[i + len] = src[i];
		i++;
	}
	dst[i + len] = '\0';
	return (dst);
}
