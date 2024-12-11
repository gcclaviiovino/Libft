#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*mem;

	if (nelem  == 0 || elsize == 0)
		return (NULL);
	mem = (void *) malloc(sizeof(elsize) * nelem);
	ft_memset(mem, 0, elsize);
	return (mem);
}