#include <unistd.h>

int ft_strlen (char *str)
{
	int i = 0;
	while(str[i]) i++;
	return i;
}

int is_in_buf (char c, char *buf)
{
	int i = 0;
	while (buf[i])
	{
		if (c == buf[i])
			return 1;
		i++;
	}
	return 0;
}

void common_second_order (char *outer_str, char *inner_str)
{
	int outer_len;
	outer_len = ft_strlen (outer_str);
	char buf[outer_len + 1];
	int i;
	int j;
	int buf_index = 0;
	buf[0] = '\0';
	i = 0;
	while (outer_str[i])
	{
		if (is_in_buf(outer_str[i], buf))
			i++;
		else
		{
		j = 0;
		while (inner_str[j])
		{
			if (outer_str[i] == inner_str[j])
			{
				buf[buf_index] = outer_str[i];
					buf_index++;
				break;
			}j++;
		}i++;}}
	buf[buf_index] = '\0';
	i = 0;
	while (buf[i])
	{
		write (1, &buf[i], 1);
		i++;}}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		char *outer_str = argv[2];
		char *inner_str = argv[1];
		common_second_order(outer_str, inner_str);
	}
	else
		write (1, "wrong number of arguments", 25);
	write (1, "\n", 1);
	return (0);
}
