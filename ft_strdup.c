#include "libft.h"

char	static *ft_strcpy(char *dest, const char *src) // mancano i controlli
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	while (dest[i] != '\0')
	{
		dest[i] = '\0';
		i ++;
	}
	return (dest);
}

char	*ft_strdup(const char *str) // mancano i controlli
{
	char	*dest;
	int		len;

	len = ft_strlen(str);
	dest = (char *) malloc(sizeof(char) * (len + 1));
	ft_strcpy(dest, str);
	return (dest); // ha senso?
}