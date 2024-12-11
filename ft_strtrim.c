#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[i2])
		{
			while ((str[i + i2] == to_find[i2]))
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

char	*ft_strtrim(const char *s1, const char *set)
{
	int		size;
	char	*s_trim;
	int		i;
	char	*s_start;

	i = 0;
	size = ft_strlen(s1) - ft_strlen(set);
	s_trim = (char *) malloc(sizeof(char) * size + 1);
	if (!s_trim)
		return (NULL);
	if (ft_strstr(s1, set) != 0)
	{
		*s_start = ft_strstr(s1, set)
		while (*s1 != ft_strstr(s1, set))
		{
			s_trim[i] = 
		}
	}
}