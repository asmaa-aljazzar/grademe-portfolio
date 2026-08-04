int	clamp(int v, int l, int h)
{
	if (l > h && (v < h || v > l))
		return (l);
	return ((v < l) ? l : ((v > h) ? h : v));
}
	
