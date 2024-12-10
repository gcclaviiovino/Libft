char	*ft_strcat(char *s1, char *s2) // mancano i controlli
{
	int	i;
	int	i2;

	i = 0;
	i2 = ft_strlen(s1);
	while (s2[i] != '\0')
	{
		s1[i + i2] = s2[i];
		i ++;
	}
	s1[i + i2] = '\0';
	return (s1);
}