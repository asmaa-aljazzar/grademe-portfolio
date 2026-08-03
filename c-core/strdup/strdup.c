#include <stdlib.h>

size_t slen (const char *s)
{
	int i = 0;
	while (s[i]) i++;
	return i;
}

char *strdup(const char *s)
{
	int len = slen (s);
	unsigned int i = 0;
	char *dub = (char *) malloc (sizeof (char) * (len + 1));
	if (!dub)
		return NULL;
	while (s[i])
	{
		dub[i] = s[i];
		i++;
	}
	dub[i] = '\0';
	return dub;
}
