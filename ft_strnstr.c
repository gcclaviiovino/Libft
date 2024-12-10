char	*ft_strnstr(const char *str, const char *to_find, size_t n) // mancano i controlli
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[i2])
		{
			while ((str[i + i2] == to_find[i2]) && (i + i2) < n)
			{
				i2 ++;
			}
		}
		if (to_find[i2] == '\0')
			return (&str[i]);
		i ++;
	}
	return (0);
}