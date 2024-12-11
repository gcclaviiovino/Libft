#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n) // mancano i controlli
{
	unsigned char	*s_str;
	size_t			i;

	i = 0;
	s_str = (unsigned char *)str;
	while (i < n)
	{
		if (s_str[i] == (unsigned char)c)
			return (&s_str[i]);
		i ++;
	}
	return (NULL);
}