int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	res;

	sign = 1;
	i = 0;
	res = 0;
	if (str[i] == '-')
	{
		sign *= -1;
		i ++;
	}
	while (str[i] != '\0')
	{
		res = (res * 10) + (str[i] - '0');
		i ++;
	}
	return (res * sign);
}