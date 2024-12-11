#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s_s1;
	unsigned char	*s_s2;

	s_s1 = (unsigned char *)s1;
	s_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((*s_s1 == *s2) && n >= 0)
	{
		s_s1 ++;
		s_s2 ++;
		n --;
	}
	return ((int)*s_s1 - *s_s2);
}