#include "libft.h"

void	ft_bzero(void *add, size_t n)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = add;
	while (i < n)
	{
		str[i] = 0;
		i ++;
	}
}