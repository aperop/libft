char	*strchr(const char	*s, int	c)
{
	char	*tmp = s;
	while (*tmp != c && *tmp)
	{
		tmp++;
	}
	if (*tmp != c)
		*tmp = 0;
	return (tmp);
}
