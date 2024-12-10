#include "libft.h"

void	ft_putnbr_fd(int nb, fd)
{
	char	num;

	if (nb > 9)
	{
		ft_putnbr(nb);
		nb = nb % 10;
	}
	num = nb + '0';
	ft_putchar_fd(num, fd);
}