char	*ft_strtrim(const char *s1, const char *set)
{
	int		size;
	char	*s_trim;

	size = ft_strlen(s1) - ft_strlen(set);
	s_trim = (char *) malloc(sizeof(char) * size + 1);
	if (!s_trim)
		return (NULL);
	
}