int	tolower(int c)
{
	return (c = (c >= 'A' && c <= 'Z') ? c + 32 : c);
}
