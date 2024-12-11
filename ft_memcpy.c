#include "libft.h"

void	ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ds;
	unsigned char	*sr;
	size_t			i;

	i = 0;
	ds = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest != src)
	{
		while (i < n)
		{
			ds[i] = sr[i];
			i ++;
		}
	}
	return (dest);
}