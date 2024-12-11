#include "libft.h"

static int	digit(int nb)
{
	while (nb > 9)
	{
		nb = nb / 10;
	}
	return (nb);
}

static int	size(int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		count ++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		count ++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		unit;
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = size(n);
	str = (char *) malloc(sizeof(char) * len + 1);
	if (n < 0)
	{
		str[i] = '-';
		n = -n;
		i ++;
	}
	while (n > 0)
	{
		unit = digit(n);
		str[i] = unit + '0';
		i ++;
		n = n % 10;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	*str;
	int		i = 0;

	str = ft_itoa(4352);
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i ++;
	}
}*/