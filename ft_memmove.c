#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count) // mancano i controlli
{
	size_t			cnt;
	size_t			i;
	unsigned char	*ds;
	unsigned char	*sr;

	cnt = 0;
	i = 1;
	ds = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (dest > src)
	{
		i = -1;
		ds += n - 1;
		sr += n -1;
	}
	while (cnt < count)
	{
		*ds = *sr;
		ds += i;
		sr += i;
		cnt ++;
	}
	return (dest);
}