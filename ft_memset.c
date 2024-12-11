#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_str;

	i = 0;
	s_str = (unsigned char *)str;
	while (i < n)
	{
		s_str[i] = c;
		i ++;
	}
	return (str);
}