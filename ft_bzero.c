void	ft_bzero(void *add, unsigned int n) // prob da sostituire con size_t (ma prima studialo)
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